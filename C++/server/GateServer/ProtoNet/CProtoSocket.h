#pragma once
#ifndef CPROTOSOCKET_H
#define CPROTOSOCKET_H
#include "../../../../My_Commnon/Tcp_ProtoSession.h"
class CCProtoSocket : public Tcp_ProtoSession
{
public:
	CCProtoSocket(boost::asio::io_service& is);
	virtual ~CCProtoSocket(void);

public:
	virtual void reset();
	virtual void on_close( const boost::system::error_code& error );
	virtual void on_accept( tcp_server* p );
	virtual void proc_message( const message_t& msg );
	virtual void run();
	inline unsigned long GetAccountID(){return m_nAccountID;}
	inline void setAccountID(unsigned long account){m_nAccountID = account;}
protected:
	uint32 m_nMsgSize;
	uint32 m_nMsgCleanTime;
	bool m_bAuthSuccess;
	uint32 m_last_ping_time;
	uint32 m_ping_count;
	uint32 m_accept_time;
	unsigned long	m_nAccountID;
	bool m_is_valid_connection;


	string m_strIP;
	DWORD  m_dwIP;
	int m_iPort;

};

#endif