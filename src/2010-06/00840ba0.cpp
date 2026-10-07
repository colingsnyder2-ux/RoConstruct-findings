// roc 2010-06 00840ba0  unit: CXTPHookManagerHookAble  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00840ba0
//
// 00840ba0  8bc1                 mov eax, ecx
// 00840ba2  33c9                 xor ecx, ecx
// 00840ba4  c7000874a600         mov dword ptr [eax], 0xa67408
// 00840baa  894804               mov dword ptr [eax + 4], ecx
// 00840bad  894810               mov dword ptr [eax + 0x10], ecx
// 00840bb0  89480c               mov dword ptr [eax + 0xc], ecx
// 00840bb3  894808               mov dword ptr [eax + 8], ecx
// 00840bb6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00840ba0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00840ba0();
};
S_func_00840ba0::S_func_00840ba0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
