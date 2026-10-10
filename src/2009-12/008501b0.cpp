// from server: 67% by atomic.potato
struct S
{
    int f(int, int);
};

int S::f(int a, int b)
{
    typedef int (__thiscall *Fn)(S *, int *, int *, int);
    Fn fn = *(Fn *)(*(unsigned **)(this) + 0x5c);
    return fn(this, &a, &b, a) ? 0 : a;
}
