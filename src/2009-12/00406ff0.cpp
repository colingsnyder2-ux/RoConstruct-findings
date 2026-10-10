// from server: 71% by atomic.potato
extern "C" void __stdcall operator_delete(void *);

struct S
{
    int f(int);
};

int S::f(int flag)
{
    void *p = *(void **)((char *)this + 0x10);
    if (p)
    {
        void **vtable = *(void ***)p;
        typedef void (__thiscall *ReleaseFunction)(void *);
        ((ReleaseFunction)vtable[2])(p);
    }
    if (flag & 1)
        operator_delete(this);
    return (int)this;
}
