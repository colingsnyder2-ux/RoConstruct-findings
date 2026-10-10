// from server: 75% by atomic.potato
struct S
{
    struct VTable
    {
        char pad[332];
        int (__thiscall *f)(S *, int, int);
    };

    VTable *vptr;
    int f(int, int);
};

int S::f(int a, int b)
{
    vptr->f(this, a, 0);
    return a;
}
