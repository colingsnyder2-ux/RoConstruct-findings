// from server: 46% by atomic.potato
struct S {
    char pad[0x54];
    unsigned char flags;
    int f(int, int, int);
};

extern "C" {
    void __stdcall sub_98b6f4(void*);
    void __stdcall sub_98b754(void*);
    void __stdcall sub_98b6f0(void*, void*);
    void __stdcall sub_98b6e4(void*);
    void __stdcall sub_98b750(void*);
    void __stdcall sub_722240(void);
}

int S::f(int a, int b, int c)
{
    if (flags & 1)
    {
        char buf1[0x1c];
        char buf2[0x1c];
        sub_98b6f4(buf1);
        sub_98b754(buf2);
        *(void**)(buf2 + 0x1c) = (void*)0x99fda0;
        sub_98b6f0(buf1, buf2);
        *(void**)(buf2 + 0x1c) = (void*)0x99fda0;
        sub_98b6e4(buf2);
        sub_98b750(buf2);
        sub_98b6e4(buf1);
    }
    sub_722240();
    return 0;
}
