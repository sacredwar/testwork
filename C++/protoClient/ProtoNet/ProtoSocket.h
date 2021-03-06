#pragma once
#include "../../../My_Commnon/tcp_ProtoClient.h"
class CProtoSocket :public tcp_ProtoClient
{
public:
	CProtoSocket(boost::asio::io_service& is);
	virtual ~CProtoSocket(void);

public:
	virtual void on_close( const boost::system::error_code& error );
	virtual void on_connect();
	virtual void on_connect_failed( boost::system::error_code error );
	virtual void proc_message( const message_t& msg );
};

