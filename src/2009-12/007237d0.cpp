// from server: 43% by atomic.potato
extern "C" {
    __declspec(dllimport) void __stdcall sub_98B6F4(void*);
    __declspec(dllimport) void __stdcall sub_98B754(void*);
    __declspec(dllimport) void __stdcall sub_98B6F0(void*, void*);
    __declspec(dllimport) void __stdcall sub_98B6E4(void*);
    __declspec(dllimport) void __stdcall sub_98B750(void*);
}

struct S {
    char pad[0x58];
    unsigned char flags;
    void sub_7229E0(int, int, int);
    void func(int, int, int);
};

void S::func(int a, int b, int c)
{
    if (flags & 1)
    {
        char buf1[0x1C];
        char buf2[0x1C];
        sub_98B6F4(buf1);
        sub_98B754(buf2);
        sub_98B6F0(buf2, buf1);
        sub_98B6E4(buf2);
        sub_98B750(buf2);
        sub_98B6E4(buf1);
    }
    sub_7229E0(a, b, c);
}
