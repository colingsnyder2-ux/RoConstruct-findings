// from server: 94% by atomic.potato
struct S
{
    int f();
    void *vtable;
    S *child;
    int unused;
    S *next;
};

int S::f()
{
    S *p = this;
    do
    {
        typedef void (__thiscall *Fn)(S *);
        Fn fn = (Fn)((void **)p->vtable)[8];
        fn(p);
        if (p->child)
            p->child->f();
        p = p->next;
    } while (p);
    return 0;
}
