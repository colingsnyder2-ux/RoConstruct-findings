// roc 2007-08 006992a0  unit: CXTPPropertyGridItemConstraints  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006992a0
//
// 006992a0  8bc1                 mov eax, ecx
// 006992a2  33c9                 xor ecx, ecx
// 006992a4  c70080167d00         mov dword ptr [eax], 0x7d1680
// 006992aa  894804               mov dword ptr [eax + 4], ecx
// 006992ad  894810               mov dword ptr [eax + 0x10], ecx
// 006992b0  89480c               mov dword ptr [eax + 0xc], ecx
// 006992b3  894808               mov dword ptr [eax + 8], ecx
// 006992b6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006992a0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006992a0();
};
S_func_006992a0::S_func_006992a0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
