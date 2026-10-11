// from server: 40% by atomic.potato
struct S
{
    struct V
    {
        struct W
        {
            int (__thiscall *f)(W*, void*);
        };

        W* v;
    };

    V* p;
    int f(void*);
};

int S::f(void* a)
{
    return p->v->f(p->v, a) == p->v->f(p->v, a);
}
