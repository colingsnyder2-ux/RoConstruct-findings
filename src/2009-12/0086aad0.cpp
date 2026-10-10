// from server: 94% by atomic.potato
struct S
{
    int value;
    void f();
};

extern "C" void __cdecl call_7f3e30();

void S::f()
{
    call_7f3e30();
    if (*((int *)((char *)this + 0x158)) == 0)
    {
        int *vtable = *(int **)this;
        ((void (__thiscall *)(S *, int))vtable[0x148 / 4])(this, -1);
    }
}
