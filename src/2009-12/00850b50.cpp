// from server: 57% by atomic.potato
struct S
{
};

void __cdecl f(void *p)
{
    if (!p)
        return;

    struct VTable
    {
        void (__thiscall *fn)(void *, int, void *, void *);
    };

    VTable *v = *(VTable **)p;
    v->fn(p, 0x65, (char *)&p + 0x0c, *(void **)((char *)&p + 0x0c));
}
