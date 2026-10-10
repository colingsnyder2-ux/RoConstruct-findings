// from server: 34% by atomic.potato
struct S
{
    typedef void (__thiscall *Fn)(float *);

    int f(void *);
    Fn *m0;
    char *m1;
};

int S::f(void *p)
{
    char *q = 0;
    if (p)
        q = (char *)p - 28;
    ((Fn *)m1)[0]((float *)((char *)this + 20) + (q - (char *)0));
    return 0;
}
