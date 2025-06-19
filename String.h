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
		string(const char* str);
		const char* c_str()const;
		~string();
		string(const string& s);
		size_t size();
		size_t size() const;
		iterator begin();
		iterator end();
		const_iterator begin()const;
		const_iterator end()const;
		void push_back(char ch);
		void pop_back();
		char& operator[](size_t i);
		const char& operator[](size_t i)const;
		void append(const char* str);
		void reserve(size_t n);
		string& operator+=(char ch);
		string& operator+=(const char* str);
		string& insert(size_t pos,char ch);
		string& insert(size_t pos,const char* str);
		string& erase(size_t pos, size_t len = npos);
		size_t find(char ch, size_t pos = 0)const;
		size_t find(const char* str , size_t pos = 0)const;
		string substr(size_t pos, size_t len = npos)const;
		bool operator<(const string& s)const;
		bool operator<=(const string& s)const;
		bool operator>(const string& s)const;
		bool operator>=(const string& s)const;
		bool operator==(const string& s)const;
		bool operator!=(const string& s)const;
	
	
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	public:
		static const size_t npos;
	};
	ostream& operator<<(ostream& out, const string& s);
	

}
