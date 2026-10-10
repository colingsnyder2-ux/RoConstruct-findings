// from server: 88% by atomic.potato
struct S
{
    int __cdecl f(void *p, void *q);
};

int S::f(void *p, void *q)
{
    if (p == 0)
        return 0;
    int *v = *(int **)p;
    typedef int (__thiscall *Fn)(void *, int, void *, int);
    return ((Fn)v[0x58 / 4])(p, 0x1e, q, 0);
}
