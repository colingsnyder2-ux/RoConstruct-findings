// from server: 74% by atomic.potato
extern "C" void __cdecl Function_0097cd7e();

struct S_func_007c8830
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007c8830();
};

S_func_007c8830::S_func_007c8830()
{
}

struct S
{
    int f(int value);
};

int S::f(int value)
{
    Function_0097cd7e();
    S_func_007c8830* p = (S_func_007c8830*)((char*)this + 0x24);
    S_func_007c8830();
    *(int*)((char*)this + 0x20) = value;
    *(int*)this = 0xA5809C;
    return (int)this;
}
