// from server: 38% by atomic.potato
extern void G1_func_007bbfaa();

struct S_func_006da2a0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006da2a0();
};

S_func_006da2a0::S_func_006da2a0()
{
}

struct S_func_006db740
{
    int f();
};

int S_func_006db740::f()
{
    G1_func_007bbfaa();
    S_func_006db740* p = this;
    *(void**)p = (void*)0x854d9c;
    S_func_006da2a0* q = (S_func_006da2a0*)((char*)p + 0x20);
    S_func_006da2a0();
    *(void**)q = (void*)0x854d80;
    *(int*)((char*)p + 0x34) = 0;
    *(int*)((char*)p + 0x38) = 0;
    return (int)p;
}
