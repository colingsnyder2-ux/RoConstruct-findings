// from server: 95% by atomic.potato
struct S
{
    void f(int *);
};

void __thiscall S::f(int *p)
{
    p[0] = 0x124;
    p[1] = 0x24;
}
