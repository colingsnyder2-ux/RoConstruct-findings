// from server: 88% by atomic.potato
struct S
{
    int f(void *);
};

int S::f(void *p)
{
    struct V
    {
        void (__thiscall *g)(void *, void *);
    };

    void *q = *(void **)((char *)this + 0x25c);
    V *v = *(V **)q;
    v->g(q, p);
    return (int)p;
}
