// from server: 75% by atomic.potato
struct S
{
    void *Get();
};

void *S::Get()
{
    void *p = *(void **)((char *)this - 0x84);
    if (p == 0 || *(int *)((char *)p + 0x20) == 0)
        return 0;
    return ((void *(__thiscall *)(void *))(*(void ***)p)[0x61])(p);
}
