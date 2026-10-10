// from server: 52% by atomic.potato
struct S
{
    int f(void *);
};

int S::f(void *arg)
{
    void *p = *(void **)((char *)this + 0x1c);
    void *v = ((void *(__thiscall *)(void *, void *))(*(void ***)p)[2])(p, arg);
    ((void (__thiscall *)(void *, void *))0x5ef120)(this, &v);
    return (int)v;
}
