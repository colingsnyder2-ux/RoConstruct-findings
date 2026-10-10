// from server: 60% by atomic.potato
struct S
{
};

int __cdecl f(void *p)
{
    if (!p)
        return 0;

    return ((int (__thiscall *)(void *, void *, void *, void *))(*(unsigned long *)p + 0x5c))(p, p, p, p);
}
