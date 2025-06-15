#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;

//int main()
//{
//	char str1[] = "½­ºº";
//		str1[1]++;
//		str1[1]++;
//		cout << str1 << endl;
//
//		return 0;
//}
//class string
//{
//private:
//	char* s1;
//	size_t _size;
//	size_t _capacity;
//};
//int main()
//{
//	string s1;
//	string s2("hello world");
//	string s3(s2);
//	string s4(s2, 0, 5);
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//	const char* str5 = "hello world";
//	string s6(str5, 5);
//	cout << s6 << endl;
//	return 0;
//}
void test01()
{
	string s1;
		string s2("hello world");
		string s3(s2);
		string s4(s2, 0, 5);
		cout << s1 << endl;
		cout << s2 << endl;
		cout << s3 << endl;
		cout << s4 << endl;
		const char* str5 = "hello world";
		string s6(str5, 5);
		cout << s6 << endl;
		s1 = s2;
		cout << s1 << endl;
}
void test02()
{
	string s1("hello world");
	const string s2("hello world");
	//s1[0]++;
	////s2[0]++;
	//cout << s1 << endl;
	for (size_t i = 0;i < s1.size();i++)
	{
		s1[i]++;
	}
	cout << s1 << endl;
	string::iterator it1 = s1.begin();
	while (it1 != s1.end())
	{
		(*it1)--;
		++it1;
	}
	cout << s1 << endl;
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	vector<int>::iterator itv1 = v.begin();
	while (itv1 != v.end())
	{
		cout << *itv1 << " ";
		++itv1;
	}
	reverse(s1.begin(), s1.end());
	cout << s1 << endl;
}
int main()
{
	//test01();
	test02();
	return 0;
}