// from server: 19% by atomic.potato
struct VTable
{
    void (__thiscall *fn)(void *, void *);
};

struct S
{
    void *get();
    void f(void *);
};

void *S::get()
{
    return 0;
}

void S::f(void *arg)
{
    void *p = get();
    VTable *v = *(VTable **)p;
    v->fn(p, arg);
}
