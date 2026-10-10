// from server: 69% by atomic.potato
struct S
{
    int f();
};

int S::f()
{
    struct V
    {
        void (__thiscall *a)(V *);
        char pad[0x160];
        void (__thiscall *b)(V *);
        char pad2[0x20];
        void (__thiscall *c)(V *);
    };

    V *p = *(V **)((char *)this + 0x180);
    p->b(p);
    p->c(p);
    return 0;
}
