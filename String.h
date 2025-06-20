#pragma once
#include<iostream>
#include<string.h>
#include<assert.h>
using namespace std;

// 定义一个自定义命名空间 yiming，将自定义的 string 类封装在其中，避免命名冲突
namespace yiming
{
    // 自定义的 string 类，模拟标准库中的 std::string 类的部分功能
    class string
    {
    public:
        // 定义迭代器类型，iterator 是普通迭代器，用于非 const 对象的遍历
        typedef char* iterator;
        // 定义常量迭代器类型，const_iterator 用于 const 对象的遍历，保证不会修改对象内容
        typedef const char* const_iterator;

        // 默认构造函数，用于创建一个空的 string 对象
        string();

        // 带参数的构造函数，接受一个 C 风格字符串，用于用该字符串初始化 string 对象
        string(const char* str);

        // 返回一个指向存储在 string 对象中的 C 风格字符串的指针，该函数为 const 函数，意味着不会修改对象内容
        const char* c_str()const;

        // 析构函数，在对象生命周期结束时自动调用，负责释放对象占用的动态内存
        ~string();

        // 拷贝构造函数，用于通过另一个 string 对象创建一个新的 string 对象，实现对象的复制
        string(const string& s);

        // 非 const 版本的 size 函数，返回 string 对象中存储的字符串的长度
        size_t size();

        // const 版本的 size 函数，用于 const 对象，返回 string 对象中存储的字符串的长度
        size_t size() const;

        // 返回指向 string 对象中字符串起始位置的普通迭代器
        iterator begin();

        // 返回指向 string 对象中字符串结束位置（即最后一个字符的下一个位置）的普通迭代器
        iterator end();

        // 返回指向 string 对象中字符串起始位置的常量迭代器，用于 const 对象
        const_iterator begin()const;

        // 返回指向 string 对象中字符串结束位置（即最后一个字符的下一个位置）的常量迭代器，用于 const 对象
        const_iterator end()const;

        // 在 string 对象的末尾添加一个字符 ch
        void push_back(char ch);

        // 删除 string 对象末尾的一个字符
        void pop_back();

        // 重载 [] 运算符，非 const 版本，用于访问 string 对象中指定位置 i 的字符，可用于修改该字符
        char& operator[](size_t i);

        // 重载 [] 运算符，const 版本，用于 const 对象，访问 string 对象中指定位置 i 的字符，不能修改该字符
        const char& operator[](size_t i)const;

        // 在 string 对象的末尾追加一个 C 风格字符串 str
        void append(const char* str);

        // 为 string 对象预留至少 n 个字符的存储空间，避免频繁的内存重新分配
        void reserve(size_t n);

        // 清空 string 对象中的内容，使其变为空字符串
        void clear();

        // 重载 += 运算符，用于在 string 对象的末尾追加一个字符 ch
        string& operator+=(char ch);

        // 重载 += 运算符，用于在 string 对象的末尾追加一个 C 风格字符串 str
        string& operator+=(const char* str);

        // 在 string 对象的指定位置 pos 插入一个字符 ch
        string& insert(size_t pos, char ch);

        // 在 string 对象的指定位置 pos 插入一个 C 风格字符串 str
        string& insert(size_t pos, const char* str);

        // 从 string 对象的指定位置 pos 开始删除长度为 len 的字符，如果 len 为 npos 则删除从 pos 到字符串末尾的所有字符
        string& erase(size_t pos, size_t len = npos);

        // 从指定位置 pos 开始查找字符 ch 第一次出现的位置，如果找到则返回其位置，未找到则返回 npos
        size_t find(char ch, size_t pos = 0)const;

        // 从指定位置 pos 开始查找 C 风格字符串 str 第一次出现的位置，如果找到则返回其位置，未找到则返回 npos
        size_t find(const char* str, size_t pos = 0)const;

        // 从指定位置 pos 开始截取长度为 len 的子字符串，如果 len 为 npos 则截取从 pos 到字符串末尾的所有字符，并返回一个新的 string 对象
        string substr(size_t pos, size_t len = npos)const;

        // 重载 < 运算符，用于比较两个 string 对象的大小，如果当前对象小于另一个对象则返回 true，否则返回 false
        bool operator<(const string& s)const;

        // 重载 <= 运算符，用于比较两个 string 对象的大小，如果当前对象小于等于另一个对象则返回 true，否则返回 false
        bool operator<=(const string& s)const;

        // 重载 > 运算符，用于比较两个 string 对象的大小，如果当前对象大于另一个对象则返回 true，否则返回 false
        bool operator>(const string& s)const;

        // 重载 >= 运算符，用于比较两个 string 对象的大小，如果当前对象大于等于另一个对象则返回 true，否则返回 false
        bool operator>=(const string& s)const;

        // 重载 == 运算符，用于比较两个 string 对象的内容是否相等，如果相等则返回 true，否则返回 false
        bool operator==(const string& s)const;

        // 重载 != 运算符，用于比较两个 string 对象的内容是否不相等，如果不相等则返回 true，否则返回 false
        bool operator!=(const string& s)const;

    private:
        // 指向存储字符串的动态数组的指针
        char* _str;
        // 记录当前 string 对象中存储的字符串的长度
        size_t _size;
        // 记录当前 string 对象分配的存储空间的容量
        size_t _capacity;

    public:
        // 静态常量成员 npos，表示一个无效的位置，通常用于表示查找失败等情况
        static const size_t npos;
    };

    // 重载 << 运算符，用于将 string 对象输出到输出流中，如 cout
    ostream& operator<<(ostream& out, const string& s);

    // 重载 >> 运算符，用于从输入流中读取数据到 string 对象中，如 cin
    istream& operator>>(istream& in, string& s);

    // 从输入流中读取一行数据到 string 对象中，直到遇到指定的分隔符 delim（默认为换行符 \n）
    istream& getline(istream& in, string& s, char delim = '\n');

}