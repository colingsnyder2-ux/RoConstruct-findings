// from server: 32% by atomic.potato
extern char G;

struct S_func_009e2e90
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_009e2e90();
};

S_func_009e2e90::S_func_009e2e90()
{
}

struct S_func_00a99584
{
    S_func_00a99584();
};

S_func_00a99584::S_func_00a99584()
{
}

struct S
{
    S();
    int value0;
    char padding[0x1c];
    S_func_009e2e90 value1;
    char padding2[0x10];
    int value2;
};

S::S()
{
    S_func_00a99584();
    value0 = 0xc1717c;
    value1.S_func_009e2e90::S_func_009e2e90();
    value2 = 0;
}
