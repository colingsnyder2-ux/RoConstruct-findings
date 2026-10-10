// from server: 76% by atomic.potato
struct S
{
    int f();
    int pad[36];
};

int S::f()
{
    struct V
    {
        int (__thiscall *fn)(V *);
    };

    V *p = *(V **)((char *)this + 0x90);
    return p->fn(p);
}
