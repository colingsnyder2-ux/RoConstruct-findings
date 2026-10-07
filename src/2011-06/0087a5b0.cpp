// roc 2011-06 0087a5b0  unit: CXTPPropertyGridItemConstraints  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087a5b0
//
// 0087a5b0  8bc1                 mov eax, ecx
// 0087a5b2  33c9                 xor ecx, ecx
// 0087a5b4  c70070ddac00         mov dword ptr [eax], 0xacdd70
// 0087a5ba  894804               mov dword ptr [eax + 4], ecx
// 0087a5bd  894810               mov dword ptr [eax + 0x10], ecx
// 0087a5c0  89480c               mov dword ptr [eax + 0xc], ecx
// 0087a5c3  894808               mov dword ptr [eax + 8], ecx
// 0087a5c6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0087a5b0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0087a5b0();
};
S_func_0087a5b0::S_func_0087a5b0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
