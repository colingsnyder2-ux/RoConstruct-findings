// from server: 73% by atomic.potato
struct S
{
    unsigned char f(void *, void *);
};

unsigned char S::f(void *, void *arg)
{
    struct V
    {
        int a;
        int b;
        int c;
        int d;
    };

    V *v = (V *)arg;
    if (v->c != *(int *)((char *)this + 28))
        return 0;
    return ((unsigned char (__thiscall *)(S *, void *))(*(int *)(*(int **)this + 64)))(this, (void *)v->d);
}
