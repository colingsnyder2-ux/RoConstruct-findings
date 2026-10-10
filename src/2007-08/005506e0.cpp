// from server: 46% by colin
extern "C" {
    void __stdcall sub_77E698(void*);
    void __stdcall sub_77E6F8(void*);
    void __stdcall sub_77E69C(void*);
    void __stdcall sub_77E6AC(void*);
    void __stdcall sub_77E6F4(void*);
    void __stdcall sub_54FBA0(void*, int, int, int);
}

struct S {
    char pad[0x9c];
    unsigned char flags;
    void f(int, int, int);
};

void S::f(int a, int b, int c)
{
    if (flags & 1)
    {
        char buf1[0x1c];
        char buf2[0x1c];
        sub_77E698(buf1);
        sub_77E6F8(buf2);
        sub_77E69C(buf1);
        sub_77E6AC(buf2);
        sub_77E6F4(buf2);
        sub_77E6AC(buf1);
    }
    sub_54FBA0(this, a, b, c);
}
