// from server: 37% by atomic.potato
typedef int (__thiscall *Func)(void *);

struct S
{
    int f(void *);
};

int S::f(void *p)
{
    Func fn = *(Func *)((char *)this + 8);
    void *base = *(void **)((char *)this + 12);
    if (p)
        return fn((char *)base + ((char *)p - (char *)0) - 28);
    return fn(base);
}
