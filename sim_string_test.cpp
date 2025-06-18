#define _CRT_SECURE_NO_WARNINGS
#include"String.h"
namespace yiming {

	void test01()
	{
		string s1("hello world");
		s1.push_back('y');
		cout << s1 << endl;

	}
	
}
int main()
{
	yiming::test01();
	return 0;
}