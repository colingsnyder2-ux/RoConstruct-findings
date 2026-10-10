// from server: 68% by atomic.potato
struct S
{
    int f(int, int);
};

int S::f(int a, int b)
{
    typedef int (__thiscall *Fn)(S *, int, int);
    Fn fn = *(Fn *)((*(int **)this)[0x150 / 4]);
    fn(this, b, 0);
    return b;
}
