// from server: 67% by atomic.potato
struct S
{
};

int __cdecl f(void *p)
{
    if (p == 0)
        return 0;
    return ((int (__thiscall *)(void *, void *, int, void *))(*(int **)(*(int **)p + 0x58)))(p, p, 3, (char *)p + 16);
}
