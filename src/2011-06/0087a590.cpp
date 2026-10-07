// roc 2011-06 0087a590  unit: CXTPPropertyGridItemConstraints  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087a590
//
// 0087a590  8bc1                 mov eax, ecx
// 0087a592  33c9                 xor ecx, ecx
// 0087a594  c700c4d9ac00         mov dword ptr [eax], 0xacd9c4
// 0087a59a  894804               mov dword ptr [eax + 4], ecx
// 0087a59d  894810               mov dword ptr [eax + 0x10], ecx
// 0087a5a0  89480c               mov dword ptr [eax + 0xc], ecx
// 0087a5a3  894808               mov dword ptr [eax + 8], ecx
// 0087a5a6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0087a590
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0087a590();
};
S_func_0087a590::S_func_0087a590()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
