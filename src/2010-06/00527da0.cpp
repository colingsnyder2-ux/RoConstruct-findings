// from server: 61% by atomic.potato
struct S
{
    void f();
};

extern "C" void __cdecl target();

void S::f()
{
    int *p = (int *)((char *)this + 4);
    *p = 0x00a1ea08;
    target();
}
