// from server: 72% by atomic.potato
typedef unsigned int DWORD;

struct BasicString
{
    BasicString(const BasicString&);
};

struct S_func_00653dd0
{
    char pad[184];
    BasicString m_string;
    BasicString f(const BasicString&);
};

BasicString S_func_00653dd0::f(const BasicString& value)
{
    return BasicString(m_string);
}
