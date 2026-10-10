// from server: 30% by atomic.potato
struct S
{
    int f(float *);
    int *field10;
    int *field14;
};

typedef int (__thiscall *F)(int *, float);

int S::f(float *p)
{
    int *q = p ? (int *)((char *)p - 0x1c) : 0;
    return ((F)field14)(field10 + (int)q, *p);
}
