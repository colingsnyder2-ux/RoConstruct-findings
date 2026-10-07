// roc 2010-06 008a1dc0  unit: CXTPRibbonGroup  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a1dc0
//
// 008a1dc0  8bc1                 mov eax, ecx
// 008a1dc2  33c9                 xor ecx, ecx
// 008a1dc4  c7004c1da700         mov dword ptr [eax], 0xa71d4c
// 008a1dca  894804               mov dword ptr [eax + 4], ecx
// 008a1dcd  894810               mov dword ptr [eax + 0x10], ecx
// 008a1dd0  89480c               mov dword ptr [eax + 0xc], ecx
// 008a1dd3  894808               mov dword ptr [eax + 8], ecx
// 008a1dd6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008a1dc0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008a1dc0();
};
S_func_008a1dc0::S_func_008a1dc0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
