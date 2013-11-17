#include "a_message.h"


task4_4::a_message::a_message( std::istream& inp )
{
	//content_ =  new char [ content_size + 1 ];
	inp.read( content_, content_size );
	content_[content_size]='\0';
	if ( inp.eof() )
		throw std::logic_error("bad input stream, a_message cannot be readed");
}

task4_4::message_ptr task4_4::a_message::create_message( std::istream& inp )
{
	return message_ptr( new a_message( inp ) );
}

task4_4::a_message::~a_message()
{
//	delete[] content_;
}
//
const char task4_4::a_message::type() const
{
	return 'A';
}
const std::string task4_4::a_message::str() const
{
	return "a_message("+boost :: lexical_cast<std :: string>(content_)+")";
}