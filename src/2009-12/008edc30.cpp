// from server: 60% by atomic.potato
struct S_func_008edb20
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008edb20();
};

extern "C" void Call_00926442(void*);
extern int Global_00A0DA6C;

struct S
{
    int f();
};

int S::f()
{
    Call_00926442(this);
    *(int*)this = (int)&Global_00A0DA6C;
    S_func_008edb20();
    *(int*)((char*)this + 0x34) = 0;
    *(int*)((char*)this + 0x38) = 0;
    return (int)this;
}
