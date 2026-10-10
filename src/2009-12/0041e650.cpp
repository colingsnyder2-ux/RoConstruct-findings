// from server: 87% by atomic.potato
struct CSelectionTreeCtrl
{
    void f();
};

void CSelectionTreeCtrl::f()
{
    void **p = *(void ***)this;
    if (p)
    {
        void (__thiscall *fn)(void *, void *, int) =
            (void (__thiscall *)(void *, void *, int))p[0];
        void *q = (char *)this + 8;
        if (fn)
            fn(q, q, 2);
    }
    *(void **)this = 0;
}
