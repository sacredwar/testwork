#include "StdAfx.h"
#include "tcp_ProtoSession.h"
#include "MyNetGlobleObj.h"
#include "tcpserver.h"
#include "MessageC2Gate.pb.h"


Tcp_ProtoSession::Tcp_ProtoSession( boost::asio::io_service& is ) :tcp_basesession(is)
{

}


Tcp_ProtoSession::~Tcp_ProtoSession(void)
{
}

void Tcp_ProtoSession::_async_read(unsigned short datalen)
{
	boost::asio::async_read( *m_socket,
		boost::asio::buffer( m_recv_buffer, datalen),
		boost::bind( &tcp_basesession::handle_read_body, this,
		boost::asio::placeholders::error ) );
}

void Tcp_ProtoSession::_accept()
{
	MsgC2GateLoginReq Msg;
	Msg.set_id("100");
	Msg.set_password("121212");

	send_message(MsgType::C2Gate_MsgLoginReq, &Msg);
}

void Tcp_ProtoSession::receive()
{
	unsigned short& datalen = *(unsigned short*)m_recv_buffer;
	size_t mark = sizeof(unsigned short);
	message_t* msg = MyNetGlobleObj::get_message( datalen );
	msg->from = this;
	memcpy( msg->data + mark, m_recv_buffer, datalen );
	push_message( msg );
}
void Tcp_ProtoSession::_Read_Other()
{
	receive();
	_read_next_message();
}



void Tcp_ProtoSession::send_message(MsgType type, google::protobuf::Message* msgBody)
{
	MsgHead msgHead;
	msgHead.set_type(type);
	msgHead.set_msgsize(msgBody->ByteSize());
	size_t headsize = msgHead.ByteSize();
	size_t bodysize = msgBody->ByteSize();
	size_t mark = sizeof(unsigned short);
	size_t head = mark * 2;
	size_t si = headsize + bodysize + head;
	mark = headsize + bodysize;
	message_t* msg = MyNetGlobleObj::get_message(si);
	*((unsigned short*)msg->data) = headsize + bodysize;
	*((unsigned short*)msg->data + mark) = headsize;
	msg->len = si;
	msg->from = this;
	msgHead.SerializeToArray(msg->data + head , headsize);
	msgBody->SerializeToArray(msg->data + headsize + head, bodysize);
	_send_message(msg);
	
}



void Tcp_ProtoSession::send_message( const void* data, unsigned short len )
{
	if( !is_valid() || !m_isconnected || !data || !len	 || len > MAX_MESSAGE_LEN - 1 || m_send_crypt_key == 0 )
		return;
	//size_t trueSize = len + m_message_head_len;
	//message_t* msg = MyNetGlobleObj::get_message( trueSize );
	//memcpy(msg->data, data, trueSize);
	
	//m_father->push_message(msg);
	//if (m_father)
	//{
	//	int ti = 0;
	//	if( m_father->is_thread_task_transfer_id_mode() )
	//	{
	//		unsigned int transferid = *(unsigned int*)( (const char*)data + 4 );
	//		ti = transferid % m_father->get_task_thread_count();
	//	}
	//	else
	//		ti = get_thread_index();

	//	task* t = NULL;
	//	if( net_global::is_need_max_speed() )
	//		t = new optimized_compress_send_task( data, len, this, ti );
	//	else
	//		t = new compress_send_task( data, len, this, ti );
	//	m_father->push_task( t );
	//}

	//if( m_father )
	//{
	//	int ti = 0;
	//	if( m_father->is_thread_task_transfer_id_mode() )
	//	{
	//		unsigned int transferid = *(unsigned int*)( (const char*)data + 4 );
	//		ti = transferid % m_father->get_task_thread_count();
	//	}
	//	else
	//		ti = get_thread_index();

	//	task* t = NULL;
	//	if( net_global::is_need_max_speed() )
	//		t = new optimized_compress_send_task( data, len, this, ti );
	//	else
	//		t = new compress_send_task( data, len, this, ti );
	//	m_father->push_task( t );
	//}
	//else
	//{
	//	boost::mutex::scoped_lock lock( m_dsv.get_mutex() );
	//	_send_message( _compress_message( data, len, -1 ) );
	//}
}

