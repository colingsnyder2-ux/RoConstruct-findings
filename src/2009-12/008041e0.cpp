// from server: 53% by atomic.potato
struct S
{
    void f(int, int);
};

void S::f(int, int)
{
    typedef void (__thiscall *F)(S *, int, int);
    F p = *(F *)((*(unsigned long **)this) + 0x150 / 4);
    p(this, -1, 0);
}
