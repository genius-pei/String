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
		//strcpy(_str, str);
		memcpy(_str, str, _size + 1);
		
	}
	string::~string()
	{
		delete[]_str;
		_str = nullptr;
		_size = _capacity = 0;
	}
	string::string(const string& s)
	{
		_str = new char[s._capacity + 1];
		memcpy(_str, s._str, s._size + 1);
		_size = s._size;
		_capacity = s._capacity;
	}
	const char* string::c_str()const
	{
		return _str;
	}
	size_t string::size()
	{
		return _size;
	}
	size_t string::size()const
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
	string::const_iterator string::begin()const
	{
		return _str;
	}
	string::const_iterator string::end()const
	{
		return _str;
	}
	void string::reserve(size_t n)
	{
		if (n > _capacity)
		{
			char* tmp = new char[n + 1];//为\0预留空间
			memcpy(tmp, _str, _size + 1);
			delete[]_str;
			_str = tmp;
			_capacity = n;
		}
	}
	void string::push_back(char ch)
	{
		if (_size >= _capacity)
		{
			size_t newcapacity = _capacity == 0 ? 4 : 2 * _capacity;
			reserve(newcapacity);
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
		memcpy(_str+_size, str, len + 1);
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
		//out << s.c_str();
		for (size_t i = 0;i < s.size();i++)
		{
			out << s[i];
		}
		return out;
	}
	void string::insert(size_t pos, char ch)
	{
		assert(pos <= _size);
		if (_size >= _capacity)
		{
			size_t newcapacity = _capacity == 0 ? 4 : 2 * _capacity;
			reserve(newcapacity);
		}
		//挪动数据
		int end = _size;
		while (end >= (int)pos)//为要插入的数据留下空间
		{
			_str[end + 1] = _str[end];
			--end;
		}
		_str[pos] = ch;
		++_size;
	}
	void string::insert(size_t pos, const char* str)
	{
		assert(pos <= _size);
		size_t len = strlen(str);
		if (_size + len > _capacity)
		{
			size_t newcapacity = 2 * _capacity > _size + len ? 2 * _capacity : _size + len;
			reserve(newcapacity);
		}
		int end = _size;
		while (end >= (int)pos)
		{
			_str[end + len] = _str[end];
			--end;
		}
		for (size_t i = 0;i < len;i++)
		{
			_str[pos + i] = str[i];
		}
		_size += len;
	}
}