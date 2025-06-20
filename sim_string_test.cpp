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
	void split_url(const string& url)
	{
		size_t i1 = url.find(':');
		if (i1 != string::npos)
		{
			cout << url.substr(0, i1) << endl;
		}
	}
	void test03()
	{
		 string s1("https://en.cppreference.com/w/");
		split_url(s1);
	}
	void test04()
	{
		string s1("hello"), s2("hello");
		string s3("hellox"), s4("hello");
		string s5("hello"), s6("hellox");
		cout << (s1 < s2) << endl;
		cout << (s3 < s4) << endl;
		cout << (s5 < s6) << endl;
	}
	
	void test05()
	{
		string s1;
		/*string s2;
		cin >> s1>>s2;
		cout << s1 << s2<<endl;*/
		getline(cin, s1);
		cout << s1 << endl;
	}
	void blog01()
	{
		string s1("hello yiming");
		s1.push_back('x');
		cout << s1 << endl;
		s1.append("im fine");
		cout << s1 << endl;
		

	}
}

int main()
{
	//yiming::test01();
	//yiming::test02();
	//yiming::test03();
	//yiming::test04();
	//yiming::test05();
	yiming::blog01();

	return 0;
}