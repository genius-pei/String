#define _CRT_SECURE_NO_WARNINGS
#include"String.h"
namespace yiming {

	void test01()
	{
		string s1("hello world");
		s1 += 'y';
		cout << s1 << endl;

	}
	void test02()
	{
		string s1("hello world");
		string t1=s1.insert(5, 'm');
		cout << t1 << endl;
		string s2("hello world");
		string t2=s2.insert(5, "my");
		cout << t2 << endl;
		string t3=s2.erase(5, 3);
		cout << t3 << endl;
	}
	void string::pop_back()
	{
		--_size;
		_str[_size] = '\0';
	}
	
}
int main()
{
	//yiming::test01();
	yiming::test02();

	return 0;
}