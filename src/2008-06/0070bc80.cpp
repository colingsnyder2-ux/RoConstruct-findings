// roc 2008-06 0070bc80  unit: CXTPToolTipContext::CStandardToolTip  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070bc80
//
// 0070bc80  8bc1                 mov eax, ecx
// 0070bc82  33c9                 xor ecx, ecx
// 0070bc84  c700f4c58500         mov dword ptr [eax], 0x85c5f4
// 0070bc8a  894804               mov dword ptr [eax + 4], ecx
// 0070bc8d  894810               mov dword ptr [eax + 0x10], ecx
// 0070bc90  89480c               mov dword ptr [eax + 0xc], ecx
// 0070bc93  894808               mov dword ptr [eax + 8], ecx
// 0070bc96  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0070bc80
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0070bc80();
};
S_func_0070bc80::S_func_0070bc80()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
