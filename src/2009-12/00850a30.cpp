// from server: 87% by atomic.potato
struct S {
    int __cdecl f(void *a, void *b, void *c);
};

int S::f(void *a, void *b, void *c)
{
    if (a == 0)
        return 0;
    typedef int (__thiscall *Fn)(void *, void *, int, void *, int);
    Fn fn = *(Fn *)((*(void ***)a) + 0x58 / 4);
    return fn(a, c, 0, b, 0xb);
}
