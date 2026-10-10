// from server: 65% by atomic.potato
struct S
{
    struct VTable
    {
        int (*f)(S *, void *);
    };

    VTable *vptr;
    int __cdecl f(void *);
};

int S::f(void *p)
{
    int value = p ? *(int *)((char *)p + 0x20) : 0;
    return vptr->f(this, (void *)value);
}
