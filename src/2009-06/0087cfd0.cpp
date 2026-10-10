// from server: 79% by atomic.potato
typedef unsigned long DWORD;

extern "C" void __cdecl Function00719B76(void *, int, int, DWORD);

struct seg_00870000
{
    void f();
};

DWORD * const Global0089FD10 = (DWORD *)0x0089FD10;

void seg_00870000::f()
{
    Function00719B76((void *)((char *)this + 4), 4, 1, *Global0089FD10);
}
