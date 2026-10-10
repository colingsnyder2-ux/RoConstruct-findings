// from server: 70% by atomic.potato
struct S
{
    int f(S *p, int value);
    int *field138;
};

int S::f(S *p, int value)
{
    int *q;
    int *v;

    v = p ? (int *)((char *)p + 0x1c) : 0;
    q = *(int **)((char *)this + 0x138);
    q = *(int **)((char *)q + 0x1c);

    return ((int (__thiscall *)(int *, int *, int))(*(int **)*(int **)q + 0x10))(q, v, value);
}
