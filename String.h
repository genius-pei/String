#pragma once
#include<iostream>
#include<string.h>
namespace yiming
{
	class string
	{
	public:
		string();
		string(const char* str);
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};

	

}
