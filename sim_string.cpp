#define _CRT_SECURE_NO_WARNINGS
#include"String.h"
namespace yiming
{
	string::string()
		:_str(new char[1]{'\0'})
		, _size(0)
		, _capacity(0)
	{

	}
	string::string(const char* str)
		:_size(strlen(str))	
	{
		_capacity = _size;
		_str = new char[_size + 1];
		strcpy(_str, str);
		
	}
	string::~string()
	{
		delete[]_str;
		_str = nullptr;
		_size = _capacity = 0;
	}
	const char* string::c_str()const
	{
		return _str;
	}
	size_t string::size()
	{
		return _size;
	}
	char& string::operator[](size_t i)const
	{
		assert(i < _size);
		return _str[i];
	}
		
}