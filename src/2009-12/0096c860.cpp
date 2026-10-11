// from server: 58% by atomic.potato
typedef unsigned int DWORD;

struct C_0051a6d0
{
    void f(void *, void *, void *, void *, unsigned int, void *, void *);
};

extern C_0051a6d0 G_0051a6d0;

extern "C" void __cdecl func_007f4929(void *);

void func_0096c860()
{
    G_0051a6d0.f(
        (void *)0xB7EB68,
        (void *)0x9BB9BC,
        (void *)0x9BB084,
        (void *)0x5122F0,
        0x0F,
        (void *)0,
        (void *)0);
    func_007f4929((void *)0x97FB30);
}
