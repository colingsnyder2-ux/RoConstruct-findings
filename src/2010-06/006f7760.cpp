// from server: 31% by atomic.potato
struct S
{
    void (**call)(void *, float);
    int offset;
    int value;
    int (**invoke)(void *, float);
    int f(void *);
};

int S::f(void *p)
{
    float v = *(float *)p;
    int *q = (int *)p;
    if (q)
        q = (int *)((char *)q - 28);
    else
        q = 0;
    invoke = (int (**)(void *, float))((char *)this + 16);
    ((void (**)(void *, float))((char *)this + 20))[0]((char *)this + (long)q, v);
    return 0;
}
