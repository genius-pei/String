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
	char& string::operator[](size_t i)
	{
		assert(i < _size);
		return _str[i];
	}
	const char& string::operator[](size_t i)const
	{
		assert(i < _size);
		return _str[i];
	}
	string::iterator string::begin()
	{
		return _str;
	}
	string::iterator string::end()
	{
		return _str + _size;
	}
	void string::reserve(size_t n)
	{
		if (n > _capacity)
		{
			char* str = new char[n + 1];//Îª\0Ô¤Áô¿Õ¼ä
			strcpy(str, _str);
			delete[]_str;
			_str = str;
			_capacity = n;
		}
	}
	void string::push_back(char ch)
	{
		if (_size > _capacity)
		{
			size_t newcapacity = _capacity == 0 ? 4 : 2 * _capacity;
		}
		_str[_size] = ch;
		++_size;
		_str[_size] = '\0';
	}

	void string::append(const char* str)
	{
		size_t len = strlen(str);
		if (_size + len > _capacity)
		{
			size_t newcapacity = 2*_capacity>_size+len?2*_capacity:_size+len;
			reserve(newcapacity);
		}
		strcpy(_str + _size, str);
		_size += len;
	}
	string& string::operator+=(char ch)
	{
		push_back(ch);
		return *this;
	}
	string& string::operator+=(const char* str)
	{
		append(str);
		return *this;
	
	}
	ostream& operator<<(ostream& out, const string& s)
	{
		out << s.c_str();
		return out;
	}
}