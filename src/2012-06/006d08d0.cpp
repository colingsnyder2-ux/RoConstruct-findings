// from server: 93% by atomic.potato
extern "C" void __stdcall G1_func_00b229e4(void *);

struct S
{
    int f(void *);
};

int S::f(void *arg)
{
    G1_func_00b229e4(arg);
    *(unsigned int *)this = 0x00b98880;
    *(unsigned int *)((char *)this + 0x0c) =
        *(unsigned int *)((char *)arg + 0x0c);
    *(unsigned int *)((char *)this + 0x10) =
        *(unsigned int *)((char *)arg + 0x10);
    return (int)this;
}
