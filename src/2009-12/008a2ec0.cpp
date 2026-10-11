// from server: 7% by atomic.potato
extern "C" int __stdcall func_008a2ec0(void* thisptr);

struct S_func_008a2ec0 {
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008a2ec0();

    int __stdcall func_008a2ec0(void* thisptr);
};

S_func_008a2ec0::S_func_008a2ec0()
{
    p0 = 0;
    z0 = 0;
    z1 = 0;
    z2 = 0;
    z3 = 0;
}

int __stdcall S_func_008a2ec0::func_008a2ec0(void* thisptr)
{
    return func_008a2ec0(thisptr);
}
