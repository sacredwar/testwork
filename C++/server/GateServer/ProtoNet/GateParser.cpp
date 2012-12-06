#include "StdAfx.h"
#include "GateParser.h"
#include "GProtoSocket.h"
#include "MessageC2G.pb.h"
#include "CProtoSocket.h"
#include "MessageG2C.pb.h"
#include "MessageGate2LG.pb.h"
extern CGProtoSocket* p2LoginSocket;
initialiseSingleton(CGateParser);
CGateParser::CGateParser(void)
{
}


CGateParser::~CGateParser(void)
{
}

void CGateParser::ParseMessage(const message_t& msg, CCProtoSocket* pSocket)
{
	unsigned short totalsize = *((unsigned short*)msg.data);
	unsigned short headsize = *((unsigned short*)msg.data + 1);
	unsigned short mark = 2 * sizeof(unsigned short);
	MsgHead Msghead;
	Msghead.ParseFromArray(msg.data + mark, headsize);
	unsigned short msgBodyBegin = mark + headsize;
	switch(Msghead.type())
	{
	case C2Gate_MsgLoginMacReq:
		{
			if (pSocket->GetAccountID() != 0)
			{
				MsgG2CErrorACK MsgErrorACK;
				MsgErrorACK.set_en(MsgG2CErrorACK_enResult_LG_ALREADYLOGIN);
				pSocket->send_message(G2C_MsgG2CErrorACK,&MsgErrorACK);

			}
			else
			{
				MsgC2GateLoginMacReq MsgLoginMac;
				MsgLoginMac.ParseFromArray(msg.data + msgBodyBegin, Msghead.msgsize());
				if (MsgLoginMac.has_mac())
				{
					MsgGate2LGLoginReq Msg;
					Msg.set_mac(MsgLoginMac.mac());
					Msg.set_id((DWORD)pSocket);
					if (p2LoginSocket)
					{
						p2LoginSocket->send_message(Gate2LG_MsgGate2LGLoginReq, &Msg);
					}
				}

			}
			
		}
		break;
	case C2Gate_MsgBindMailReq:
		{
			if (pSocket->GetAccountID() == 0)
			{
				MsgG2CErrorACK MsgErrorACK;
				MsgErrorACK.set_en(MsgG2CErrorACK_enResult_LG_YOUARENOTLOGIN);
				pSocket->send_message(G2C_MsgG2CErrorACK,&MsgErrorACK);

			}
			else
			{
				MsgBindMailReq Msg;
				Msg.ParseFromArray(msg.data + msgBodyBegin, Msghead.msgsize());
				if (pSocket->GetAccountID() != Msg.account())
				{
					MsgG2CErrorACK MsgErrorACK;
					MsgErrorACK.set_en(MsgG2CErrorACK_enResult_LG_UNKNOW);
					pSocket->send_message(G2C_MsgG2CErrorACK,&MsgErrorACK);

				}
				else
				{
					p2LoginSocket->_send_message(msg);
				}
			}
		}
		break;
	}
	//unsigned short sII = *((unsigned short*)msg.data + sizeof(unsigned short));

}