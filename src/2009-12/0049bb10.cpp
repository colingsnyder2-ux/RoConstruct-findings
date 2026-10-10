// from server: 70% by atomic.potato
struct S_func_0049bb10 {
    char pad0[68];
    struct VTable {
        void (__thiscall *f)(void *, void *, void *);
    };
    VTable *m_vtable;
    void *f(void *, void *);
};

void *S_func_0049bb10::f(void *a, void *b)
{
    VTable *p = this->m_vtable;
    ((void (__thiscall *)(void *, void *, void *))p->f)(p, a, b);
    return b;
}
