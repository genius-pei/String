#pragma once
#include<iostream>
#include<string.h>
#include<assert.h>
using namespace std;
namespace yiming
{
	class string
	{
	public:
		typedef char* iterator;
		typedef const char* const_iterator;
		string();
		string(const char* str=" ");
		const char* c_str()const;
		~string();
		size_t size();
		iterator begin();
		iterator end();
		const_iterator begin()const;
		const_iterator end()const;
		char& operator[](size_t i);
		const char& operator[](size_t i)const;
		void push_back(char ch);
		void append(const char* str);
		void reserve(size_t n);
		string& operator+=(char ch);
		string& operator+=(const char* str);
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
	ostream& operator<<(ostream& out, const string& s);
	

}
