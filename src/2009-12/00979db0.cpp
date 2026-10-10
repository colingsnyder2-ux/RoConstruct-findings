// from server: 72% by atomic.potato
struct S
{
    void f();
};

extern "C" void __cdecl func_0073f740(int, const void *, const void *, const void *);
extern "C" void __cdecl func_007f4929(const void *);

void S::f()
{
    func_0073f740(0x9c, (const void *)0x9e268c, (const void *)0x9bb1b8, (const void *)1);
    func_007f4929((const void *)0x988c20);
}
