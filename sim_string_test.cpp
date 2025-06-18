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
		s1.insert(5, 'm');
		cout << s1 << endl;
		string s2("hello world");
		s2.insert(5, "my");
		cout << s2 << endl;
	}
	
}
int main()
{
	//yiming::test01();
	yiming::test02();

	return 0;
}