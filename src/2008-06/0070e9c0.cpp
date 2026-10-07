// roc 2008-06 0070e9c0  unit: CXTPStatusBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070e9c0
//
// 0070e9c0  8bc1                 mov eax, ecx
// 0070e9c2  33c9                 xor ecx, ecx
// 0070e9c4  c7009cd08500         mov dword ptr [eax], 0x85d09c
// 0070e9ca  894804               mov dword ptr [eax + 4], ecx
// 0070e9cd  894810               mov dword ptr [eax + 0x10], ecx
// 0070e9d0  89480c               mov dword ptr [eax + 0xc], ecx
// 0070e9d3  894808               mov dword ptr [eax + 8], ecx
// 0070e9d6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0070e9c0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0070e9c0();
};
S_func_0070e9c0::S_func_0070e9c0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
