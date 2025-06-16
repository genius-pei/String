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
	for (auto e : s1)
	{
		cout << e << " ";
	}
	cout << endl;
}
void test03()
{
	string s1;
	string s2;
	s1.reserve(100);
	cout << "size:" << s1.size() << endl;
	cout << "capacity:" << s1.capacity() << endl;
	s2.resize(10,'a');
	cout << s2 << endl;
	cout << "size:" << s2.size() << endl;
	cout << "capacity:" << s2.capacity() << endl;
}
void test04()
{
	string s1("123456");
	s1[0]++;
	cout << s1 << endl;
}
void test05()
{
	string s1("hello world");
	s1.push_back('a');
	s1.append("hello nit");
	s1.append(10, 'a');
	cout << s1 << endl;
}
void test06()
{
	string s1;
	s1.assign(10, 'y');
	s1.insert(2, "hello world");
	cout << s1 << endl;
	s1.erase(5);
	cout << s1 << endl;
	string s2("hello world");
	s2.replace(5,3,"#123");
	cout << s2 << endl;
	
	

	string s3("hello you and me");
	//size_t pos = s3.find(' ');
	//while (pos != string::npos)
	//{
	//	s3.replace(pos, 1, "%%");
	//	pos = s3.find(' ');
	//}
	//cout << s3 << endl;
	string s4;
	for (auto ch : s3)
	{
		if (ch == ' ')
		s4 += "%%";
		else
			s4 += ch;
	}
	cout << s4 << endl;
}
void test07()
{
	string filename("String.cpp");
	FILE* fout = fopen(filename.c_str(), "r");
	if (fout == nullptr)
	{
		cout << "fopen error" << endl;
		return;
	}
	char ch = fgetc(fout);
	while (ch != EOF)
	{
		cout << ch;
		ch = fgetc(fout);
	}
}
string findsuffix(const string& filename)
{
	size_t i = filename.find('.');
	if (i != string::npos)
	{
		return filename.substr(i);
	}
	else
	{
		return " ";
	}
}
void test08()
{
	string filename("String.cpp");
	string str1 = filename.substr(4, filename.size() - 4);
	cout << str1 << endl;
}

void test09()
{
	string filename("Stri.ng.cpp");
	string s1 = findsuffix(filename);
	cout << s1 << endl;
}
int main()
{
	//test01();
	//test02();
	//test03();
	//try
	//{
	//	test04();
	//}
	//catch (const exception& e)
	//{
	//	cout << e.what() << endl;
	//}
	//test05();

	//test06();
	//test07();
	//test08();
	test09();
	return 0;
}