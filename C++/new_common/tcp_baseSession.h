#ifndef ASIO_TCPSBASEESSION_HEAD
#define ASIO_TCPSBASEESSION_HEAD
#pragma once
#include "asiodef.h"
class tcp_baseSession
{
public:
	tcp_baseSession( boost::asio::io_service& is );
	virtual ~tcp_baseSession();

public:
	virtual void on_accept( tcp_server* p );
	virtual void on_close( const boost::system::error_code& error );
	virtual void proc_message( const message_t& msg ) = 0;
	virtual void push_message( message_t* msg );
	virtual void reset();

public:
	bool is_valid();
	void set_valid( bool b );
	inline bool is_connected() const { return m_isconnected; }
	inline tcp::socket& socket() { return *m_socket; }
	inline tcp_server* get_father() const { return m_father; }
	inline void set_need_check_action_time( bool b ) { m_isneedcat = b; }
	inline int get_thread_index() const { return m_thread_index; }
	inline void set_security( bool b ) { m_security = b; }
	inline bool is_security() const { return m_security; }

	std::string get_remote_address_string() const;
	unsigned int get_remote_address_ui() const;
	unsigned short get_remote_port() const;
	long get_not_sent_size();

	void send_message( const void* data, unsigned short len );
	virtual void close();
	void delay_close( unsigned int t );
	void delay_close_if_no_data( unsigned int t );
	virtual void run();


public:
	volatile unsigned int m_recv_size;
	volatile unsigned int m_send_size;
#ifdef NET_FLOW_RATE_LOG
	volatile int m_compress_size;
#endif

public:
	void handle_read_header( const boost::system::error_code& error );
	void handle_read_body( const boost::system::error_code& error );
	void handle_write( const boost::system::error_code& error, int size, int block_idx );

protected:
	virtual call_back_mgr* _get_cb_mgr();
	friend struct compress_send_task;
	friend struct optimized_compress_send_task;
	void _send_message( message_t* msg );
	void _write_message();
	void _read_next_message();
	void _uncompress_message();
	message_t* _compress_message( const void* data, unsigned short len, int t_idx );
	void _check_action_time();
	void _record_action();
	void _clear_recv_msg();
	void _clear_send_msg();
	void _on_close( const boost::system::error_code& error );

	boost::asio::io_service& m_io_service;
	volatile bool m_isconnected;
	tcp_server* m_father;
	tcp::socket* m_socket;
	std::list<message_t*> m_queue_send_msg;
	char m_recv_buffer[MAX_MESSAGE_LEN];
	unsigned int m_last_action_time;
	bool m_isneedcat;
	bool m_iscompress;
	std::set<unsigned short> m_uncommpress_type;
	unsigned int m_close_time;
	unsigned int m_close_time_if_no_data;
	volatile boost::uint32_t m_isvalid;
	bool m_isclosing;
	int m_thread_index;
	std::string m_remote_ip_str;
	unsigned int m_remote_ip_ui;
	boost::mutex m_mutex;
	char m_sending_data[MAX_MESSAGE_LEN];
	volatile bool m_is_sending_data;
	long m_not_sent_size;
	data_stream_verifier m_dsv;
	unsigned char m_send_crypt_key;
	unsigned char m_recv_crypt_key;
	bool m_security;
};

#endif