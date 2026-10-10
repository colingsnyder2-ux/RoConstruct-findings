// from server: 97% by colin
struct S_func_00596d00 {
    char pad0[0xe8];
    double m_d;
    char pad1[0x100 - 0xe8 - 8];
    char m_str[0x10];
    void f(char* p);
};

struct Str {
    void assign(const char*);
};

extern "C" void* __stdcall sub_77e62c(void*, const char*);

void S_func_00596d00::f(char* p)
{
    const char* s = (const char*)0x7a0b44;
    if (*p == 0)
        s = (const char*)0x7979d0;
    ((Str*)((char*)this + 0xf0))->assign(s);
    m_d = (double)(*p != 0);
}
