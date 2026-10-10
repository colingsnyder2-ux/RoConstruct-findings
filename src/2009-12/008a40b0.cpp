// from server: 73% by atomic.potato
struct S
{
    int f(void *p);
};

int S::f(void *p)
{
    void *q = *(void **)((char *)this + 0x4c);
    if (q == 0)
        return 0;
    if (p == q)
        return 1;
    return ((int (__thiscall *)(S *, void *))(*(void **)(*(S **)q + 0xb4)))((S *)q, p);
}
