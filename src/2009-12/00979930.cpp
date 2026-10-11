// from server: 81% by atomic.potato
struct S
{
    void f();
};

extern "C" void __cdecl f1(void *, void *, int, int, int);
extern "C" void __stdcall f2(void *);

void S::f()
{
    f1((void *)0x9e1cd8, (void *)0x9e1c14, 0x15c, 0xf, 0);
    f2((void *)0x988770);
}
