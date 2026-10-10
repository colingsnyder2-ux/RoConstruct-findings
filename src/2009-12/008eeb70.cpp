// from server: 88% by atomic.potato
struct S
{
    int f(void *);
    void *field_278;
};

typedef void (__thiscall *Func)(void *, void *);

int S::f(void *p)
{
    void *v = field_278;
    Func fn = *(Func *)((char *)*(void **)v + 0x158);
    fn(v, p);
    return (int)p;
}
