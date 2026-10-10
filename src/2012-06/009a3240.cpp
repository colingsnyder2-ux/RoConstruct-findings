// from server: 57% by atomic.potato
struct S
{
    int f(void *);
    int value;
};

extern "C" void target(void *, int);

int S::f(void *p)
{
    int v = value;
    target((char *)this + 0x24, v);
    *(int *)((char *)p + 0x214) = 1;
    return (int)p;
}
