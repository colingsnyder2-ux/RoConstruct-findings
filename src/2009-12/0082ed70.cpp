// from server: 71% by atomic.potato
extern "C" void G1_func_00926442(void *);
extern "C" void G1_func_0082d820(void *);

struct S
{
    void *v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int f();
};

int S::f()
{
    G1_func_00926442(this);
    *(void **)this = (void *)0x9f628c;
    G1_func_0082d820((char *)this + 0x20);
    *(void **)((char *)this + 0x20) = (void *)0x9f6270;
    v5 = 0;
    v6 = 0;
    return 0;
}
