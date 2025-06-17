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
		:_str(new char[strlen(str)+1])
		,_size(strlen(str))
		,_capacity(strlen(str))
		
	{
		strcpy(_str, str);
	}
		
}