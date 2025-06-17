#pragma once
#include<iostream>
#include<string.h>
#include<assert.h>
namespace yiming
{
	class string
	{
	public:
		string();
		string(const char* str=" ");
		const char* c_str()const;
		~string();
		size_t size();
		char& operator[](size_t i)const;
		//const char& string::operator[](size_t i)const;
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};

	

}
