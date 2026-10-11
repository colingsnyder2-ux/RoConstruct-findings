// from server: 42% by atomic.potato
typedef unsigned int DWORD;

struct BasicString
{
    BasicString(const BasicString&);
};

extern "C" void __stdcall construct_string(BasicString*, const BasicString&);

struct S
{
    int f(BasicString* result, BasicString* value);

    char padding[8];
    BasicString* base;
};

int S::f(BasicString* result, BasicString* value)
{
    BasicString* source = 0;
    if (value)
        source = value - 0x14;

    construct_string(result, *source);
    return (int)value;
}
