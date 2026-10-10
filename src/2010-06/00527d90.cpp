// from server: 61% by atomic.potato
extern "C" void __cdecl rbx_5301c0();

struct S
{
    void f();
};

void S::f()
{
    *((unsigned int *)((char *)this + 4)) = 0x00a1ea00;
    rbx_5301c0();
}
