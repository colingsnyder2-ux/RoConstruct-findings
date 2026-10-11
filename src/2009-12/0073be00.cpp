// from server: 37% by atomic.potato
struct S
{
    int f(void *, int);
};

int S::f(void *p, int v)
{
    int *q = (int *)((char *)p - 28);
    return ((int (__thiscall *)(void *, int))(*(int *)((char *)this + 16)))(
        (void *)*(int *)((char *)this + 20), v);
}
