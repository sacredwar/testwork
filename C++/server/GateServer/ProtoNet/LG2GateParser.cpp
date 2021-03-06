#include "StdAfx.h"
#include "LG2GateParser.h"
#include "MsgHead.pb.h"
#include "MessageLG2Gate.pb.h"
#include "MessageG2C.pb.h"
#include "CProtoSocket.h"
#include "MessageG2C.pb.h"
#include "../GameLogic/GateUserManager.h"
#include "MyNetGlobleObj.h"

initialiseSingleton(CLG2GateParser);
CLG2GateParser::CLG2GateParser(void)
{
}


CLG2GateParser::~CLG2GateParser(void)
{
}

void CLG2GateParser::ParseMessage(const message_t& msg,const CGProtoSocket* pSocket)
{
	unsigned short totalsize = *((unsigned short*)msg.data);
	unsigned short headsize = *((unsigned short*)msg.data + 1);
	unsigned short mark = 2 * sizeof(unsigned short);
	MsgHead Msghead;
	Msghead.ParseFromArray(msg.data + mark, headsize);
	unsigned short msgBodyBegin = mark + headsize;
	switch(Msghead.type())
	{
	case LG2Gate_MsgLG2GateLoginACK:
		{
			MsgLG2GateLoginACK Msg;
			Msg.ParseFromArray(msg.data + msgBodyBegin, Msghead.msgsize());

			MsgG2CLoginMacACK MsgAck;
			CCProtoSocket* pProtoSocket = GUManager.GetClient(Msg.id());
			if (pProtoSocket)
			{
				MsgAck.set_account(Msg.account());
				if (Msg.account() == 0)
				{
					MsgAck.set_account(0);

				}
				else
				{
					CCProtoSocket*pSocket = GUManager.GetLoginClient(Msg.account());
					if (pSocket)
					{
						//GUManager.DelFromLoginClient(pSocket->GetAccountID());
						GUManager.DelClient((DWORD)pSocket);
						pSocket->close();
					}

					pProtoSocket->setAccountID(Msg.account());
					if (GUManager.Add2LoginClient(pProtoSocket))
					{
						MsgAck.set_account(pProtoSocket->GetAccountID());
					}
					else
					{
						MsgAck.set_account(0);
					}
				}
				pProtoSocket->send_message(G2C_LoginMacACK, &MsgAck);
			}
			else
			{
				MyLog::log->warn("error socket [%d]", Msg.id());

				//sUserMgr.GetClient(Msg.id());
				CCProtoSocket* p = GUManager.GetClient((DWORD)pSocket);
				if (p)
				{
					p->setAccountID(Msg.account());
					MyLog::log->notice("account %ld is login", p->GetAccountID());
					GUManager.Add2LoginClient(p);
					
					MsgG2CLoginMacACK MessageACK;
					MessageACK.set_account(Msg.account());
					p->send_message(G2C_LoginMacACK, &MessageACK);
					
				}
				else
				{
					MyLog::log->warn("unknown LG2Gate_MsgLG2GateLoginACK");
				}
				
			}

			//unsigned long account = LUM.tryLogin(Msg.mac().c_str());
			//MsgLG2GateLoginACK MsgAck;
			//MsgAck.set_id(Msg.id());
			//MsgAck.set_account(account);
			//MsgAck.set_result(MsgLG2GateLoginACK_enResult_LG_OK);
			//pSocket->send_message(LG2Gate_MsgLG2GateLoginACK,&MsgAck);

		}
		break;
	default:
		{
			CCProtoSocket* pProtoSocket = GUManager.GetClient(Msghead.account());
			if (pProtoSocket)
			{
				message_t* pNew = MyNetGlobleObj::messageclone(msg);
				pProtoSocket->_send_message(pNew);
			}
			else
			{
				MyLog::log->warn("not found socket");
			}

		}

	}
}