// from server: 41% by colin
struct S {
    char pad[0x58];
    unsigned char flags;
    void f(int, int, int);
};

extern "C" {
    void __stdcall sub_77E698(void*);
    void __stdcall sub_77E6F8(void*);
    void __stdcall sub_77E69C(void*);
    void __stdcall sub_77E6AC(void*);
    void __stdcall sub_77E6F4(void*);
}

void S::f(int a, int b, int c)
{
    if (flags & 1)
    {
        char buf1[0x1c];
        char buf2[0x1c];
        char buf3[0x1c];
        sub_77E698(buf1);
        sub_77E6F8(buf2);
        sub_77E69C(buf3);
        sub_77E6AC(buf3);
        sub_77E6F4(buf2);
        sub_77E6AC(buf1);
    }
    ((void (__thiscall*)(S*, int, int, int))0x54b760)(this, a, b, c);
}
