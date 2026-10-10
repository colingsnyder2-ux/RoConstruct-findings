// from server: 71% by atomic.potato
struct S
{
    int __cdecl f(void *, int);
};

int __cdecl S::f(void *a, int b)
{
    unsigned char *p = (unsigned char *)a;
    void *q = *(void **)(p + 0x10);
    int i = *(int *)(p + 8);
    int x = *(int *)((unsigned char *)q + 0x98 + i);
    x += *(int *)(p + 4);
    void *r = (unsigned char *)q + 0x98 + x;
    return ((int (__thiscall *)(void *, int))*(int *)p)(r, b);
}
