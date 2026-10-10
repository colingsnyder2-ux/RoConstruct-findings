// from server: 86% by atomic.potato
struct S
{
};

int __cdecl f(void *p, int a, int b)
{
    if (!p)
        return 0;

    typedef int (__thiscall *Fn)(void *, int, int, int);
    Fn fn = *(Fn *)(*(int **)p + 0x58);
    return fn(p, b, 3, a);
}
