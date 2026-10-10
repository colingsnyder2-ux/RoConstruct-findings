// from server: 77% by atomic.potato
extern "C" void func_0097cd7e(void*);

struct S_func_00803280
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00803280();
};

S_func_00803280::S_func_00803280()
{
}

struct S
{
    S* f();
};

S* S::f()
{
    func_0097cd7e(this);
    *(int*)this = 0x00A602EC;
    S_func_00803280* p = (S_func_00803280*)((char*)this + 0x20);
    S_func_00803280();
    *(int*)((char*)this + 0x34) = 0;
    return this;
}
