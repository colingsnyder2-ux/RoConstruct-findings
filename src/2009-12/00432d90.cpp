// from server: 70% by atomic.potato
struct S
{
    int f(void *);
};

int S::f(void *p)
{
    void *q = *(void **)p;
    void *v = *(void **)this;
    int (__thiscall *fn)(void *, void *) =
        (int (__thiscall *)(void *, void *))(*(int *)((char *)v + 0xe8));
    return fn(this, q);
}
