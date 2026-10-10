// from server: 88% by atomic.potato
struct S
{
    int f();
};

extern "C" void * (__thiscall *imported)(void *, void *);

int S::f()
{
    void *p = *(void **)this;
    void *q = *(void **)((char *)p + 8);
    return (int)imported((void *)0x935980, q);
}
