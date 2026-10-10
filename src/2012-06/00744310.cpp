// from server: 93% by atomic.potato
struct S
{
    int f(void *arg);
};

extern "C" void __stdcall construct_bad_cast(void *);

int S::f(void *arg)
{
    construct_bad_cast(arg);
    *(void **)this = (void *)0x00baa87c;
    *(unsigned int *)((char *)this + 12) =
        *(unsigned int *)((char *)arg + 12);
    *(unsigned int *)((char *)this + 16) =
        *(unsigned int *)((char *)arg + 16);
    return (int)this;
}
