// from server: 38% by colin
struct S {
    char pad[0x58];
    unsigned char flags;
    int f(int, int, int);
};

extern "C" {
    void __stdcall sub_77e698(void*);
    void __stdcall sub_77e6f8(void*);
    void __stdcall sub_77e69c(void*, void*);
    void __stdcall sub_77e6ac(void*);
    void __stdcall sub_77e6f4(void*);
}

int S::f(int a, int b, int c)
{
    if (flags & 1)
    {
        char buf[0x20];
        char buf2[0x20];
        sub_77e698(buf);
        sub_77e6f8(buf2);
        sub_77e69c(buf2, buf);
        sub_77e6ac(buf2);
        sub_77e6f4(buf2);
        sub_77e6ac(buf);
    }
    return ((int (__thiscall*)(S*, int, int, int))0x54b4b0)(this, a, b, c);
}
