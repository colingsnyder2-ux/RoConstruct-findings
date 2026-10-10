// from server: 88% by atomic.potato
struct S
{
    int f();
};

extern "C" void __fastcall G1_func_00404200(void *);

int S::f()
{
    G1_func_00404200((char *)this + 4);
    *(int *)((char *)this + 0x20) = 0;
    *(int *)((char *)this + 0x24) = 0;
    *(int *)((char *)this + 0x28) = 0;
    return (int)this;
}
