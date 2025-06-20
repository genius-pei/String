#pragma once
#include<iostream>
#include<string.h>
#include<assert.h>
using namespace std;

// ����һ���Զ��������ռ� yiming�����Զ���� string ���װ�����У�����������ͻ
namespace yiming
{
    // �Զ���� string �࣬ģ���׼���е� std::string ��Ĳ��ֹ���
    class string
    {
    public:
        // ������������ͣ�iterator ����ͨ�����������ڷ� const ����ı���
        typedef char* iterator;
        // ���峣�����������ͣ�const_iterator ���� const ����ı�������֤�����޸Ķ�������
        typedef const char* const_iterator;

        // Ĭ�Ϲ��캯�������ڴ���һ���յ� string ����
        string();

        // �������Ĺ��캯��������һ�� C ����ַ����������ø��ַ�����ʼ�� string ����
        string(const char* str);

        // ����һ��ָ��洢�� string �����е� C ����ַ�����ָ�룬�ú���Ϊ const ��������ζ�Ų����޸Ķ�������
        const char* c_str()const;

        // �����������ڶ����������ڽ���ʱ�Զ����ã������ͷŶ���ռ�õĶ�̬�ڴ�
        ~string();

        // �������캯��������ͨ����һ�� string ���󴴽�һ���µ� string ����ʵ�ֶ���ĸ���
        string(const string& s);

        // �� const �汾�� size ���������� string �����д洢���ַ����ĳ���
        size_t size();

        // const �汾�� size ���������� const ���󣬷��� string �����д洢���ַ����ĳ���
        size_t size() const;

        // ����ָ�� string �������ַ�����ʼλ�õ���ͨ������
        iterator begin();

        // ����ָ�� string �������ַ�������λ�ã������һ���ַ�����һ��λ�ã�����ͨ������
        iterator end();

        // ����ָ�� string �������ַ�����ʼλ�õĳ��������������� const ����
        const_iterator begin()const;

        // ����ָ�� string �������ַ�������λ�ã������һ���ַ�����һ��λ�ã��ĳ��������������� const ����
        const_iterator end()const;

        // �� string �����ĩβ���һ���ַ� ch
        void push_back(char ch);

        // ɾ�� string ����ĩβ��һ���ַ�
        void pop_back();

        // ���� [] ��������� const �汾�����ڷ��� string ������ָ��λ�� i ���ַ����������޸ĸ��ַ�
        char& operator[](size_t i);

        // ���� [] �������const �汾������ const ���󣬷��� string ������ָ��λ�� i ���ַ��������޸ĸ��ַ�
        const char& operator[](size_t i)const;

        // �� string �����ĩβ׷��һ�� C ����ַ��� str
        void append(const char* str);

        // Ϊ string ����Ԥ������ n ���ַ��Ĵ洢�ռ䣬����Ƶ�����ڴ����·���
        void reserve(size_t n);

        // ��� string �����е����ݣ�ʹ���Ϊ���ַ���
        void clear();

        // ���� += ������������� string �����ĩβ׷��һ���ַ� ch
        string& operator+=(char ch);

        // ���� += ������������� string �����ĩβ׷��һ�� C ����ַ��� str
        string& operator+=(const char* str);

        // �� string �����ָ��λ�� pos ����һ���ַ� ch
        string& insert(size_t pos, char ch);

        // �� string �����ָ��λ�� pos ����һ�� C ����ַ��� str
        string& insert(size_t pos, const char* str);

        // �� string �����ָ��λ�� pos ��ʼɾ������Ϊ len ���ַ������ len Ϊ npos ��ɾ���� pos ���ַ���ĩβ�������ַ�
        string& erase(size_t pos, size_t len = npos);

        // ��ָ��λ�� pos ��ʼ�����ַ� ch ��һ�γ��ֵ�λ�ã�����ҵ��򷵻���λ�ã�δ�ҵ��򷵻� npos
        size_t find(char ch, size_t pos = 0)const;

        // ��ָ��λ�� pos ��ʼ���� C ����ַ��� str ��һ�γ��ֵ�λ�ã�����ҵ��򷵻���λ�ã�δ�ҵ��򷵻� npos
        size_t find(const char* str, size_t pos = 0)const;

        // ��ָ��λ�� pos ��ʼ��ȡ����Ϊ len �����ַ�������� len Ϊ npos ���ȡ�� pos ���ַ���ĩβ�������ַ���������һ���µ� string ����
        string substr(size_t pos, size_t len = npos)const;

        // ���� < ����������ڱȽ����� string ����Ĵ�С�������ǰ����С����һ�������򷵻� true�����򷵻� false
        bool operator<(const string& s)const;

        // ���� <= ����������ڱȽ����� string ����Ĵ�С�������ǰ����С�ڵ�����һ�������򷵻� true�����򷵻� false
        bool operator<=(const string& s)const;

        // ���� > ����������ڱȽ����� string ����Ĵ�С�������ǰ���������һ�������򷵻� true�����򷵻� false
        bool operator>(const string& s)const;

        // ���� >= ����������ڱȽ����� string ����Ĵ�С�������ǰ������ڵ�����һ�������򷵻� true�����򷵻� false
        bool operator>=(const string& s)const;

        // ���� == ����������ڱȽ����� string ����������Ƿ���ȣ��������򷵻� true�����򷵻� false
        bool operator==(const string& s)const;

        // ���� != ����������ڱȽ����� string ����������Ƿ���ȣ����������򷵻� true�����򷵻� false
        bool operator!=(const string& s)const;

    private:
        // ָ��洢�ַ����Ķ�̬�����ָ��
        char* _str;
        // ��¼��ǰ string �����д洢���ַ����ĳ���
        size_t _size;
        // ��¼��ǰ string �������Ĵ洢�ռ������
        size_t _capacity;

    public:
        // ��̬������Ա npos����ʾһ����Ч��λ�ã�ͨ�����ڱ�ʾ����ʧ�ܵ����
        static const size_t npos;
    };

    // ���� << ����������ڽ� string ���������������У��� cout
    ostream& operator<<(ostream& out, const string& s);

    // ���� >> ����������ڴ��������ж�ȡ���ݵ� string �����У��� cin
    istream& operator>>(istream& in, string& s);

    // ���������ж�ȡһ�����ݵ� string �����У�ֱ������ָ���ķָ��� delim��Ĭ��Ϊ���з� \n��
    istream& getline(istream& in, string& s, char delim = '\n');

}