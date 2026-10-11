// from server: 75% by atomic.potato
typedef unsigned int DWORD;

struct T_0070aef0
{
    void f(void *, void *, void *, int);
};

extern T_0070aef0 G_0070aef0;
extern "C" void __cdecl func_007f4929(DWORD);

void func_009780f0()
{
    G_0070aef0.f((void *)0x7029C0, (void *)0, (void *)0x9DE20C, 1);
    func_007f4929(0x987870);
}
