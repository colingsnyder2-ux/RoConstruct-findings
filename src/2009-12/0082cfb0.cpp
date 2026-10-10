// from server: 88% by atomic.potato
extern "C" void Call86AC70(void *, void *, void *);

struct S
{
    int f(void *);
};

int S::f(void *p)
{
    void *v = *(void **)((char *)this + 0x28);
    Call86AC70((char *)this + 0x20, v, p);
    if (*(int *)((char *)this + 0x3c) == 0)
    {
        *(void **)((char *)p + 0x4c) = v;
        *(void **)((char *)p + 0x50) = this;
    }
    return (int)p;
}
