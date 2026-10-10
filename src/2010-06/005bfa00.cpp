// from server: 77% by atomic.potato
struct S
{
    void f();
};

extern "C" void __cdecl Initialize(S *);

void S::f()
{
    *(int *)this = 0x00a2bae4;
    *(int *)((char *)this + 4) = 0x00a2badc;
    *(int *)((char *)this + 0x18) = 0x00a2bad0;
    *(int *)((char *)this + 0x1c) = 0x00a2bac4;
    Initialize(this);
}
