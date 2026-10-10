// from server: 46% by atomic.potato
struct S
{
    int f(void *, void *);
};

int S::f(void *p, void *q)
{
    struct V
    {
        int (**vtable)(void *, void *);
    };

    V *v = *(V **)((char *)this + 0x1c);
    return v->vtable[4](v, p) ? 1 : 1;
}
