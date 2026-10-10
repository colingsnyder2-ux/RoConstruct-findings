// from server: 22% by atomic.potato
struct S
{
    int pad0;
    int pad4;
    int pad8;
    void (__thiscall *call)(float);
    int f(void *, float *);
};

int S::f(void *p, float *v)
{
    S *x = (S *)p;
    float value = *v;
    if (x)
        x = (S *)((char *)x - 28);
    else
        x = 0;
    push:
    return 0;
}
