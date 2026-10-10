// from server: 88% by atomic.potato
struct S
{
    int __cdecl f(void *, int);
};

int S::f(void *p, int a)
{
    if (p == 0)
        return 0;
    return ((int (__thiscall *)(void *, int, void *, int))(*(int **)p)[0x58 / 4])(p, 5, (void *)a, 0);
}
