// from server: 75% by atomic.potato
struct VTable
{
    void (__thiscall *filler[36])(void *, void *);
};

struct Base
{
    VTable *vtable;
};

extern "C" Base *__cdecl sub_7f5f40(Base *);

struct S
{
    void f(void *, void *);
};

void S::f(void *a, void *b)
{
    Base *p = sub_7f5f40((Base *)this);
    p->vtable->filler[36](p, b);
}
