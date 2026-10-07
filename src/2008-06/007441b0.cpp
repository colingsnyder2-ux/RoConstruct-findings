// roc 2008-06 007441b0  unit: CXTPControlEditCtrl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007441b0
//
// 007441b0  8bc1                 mov eax, ecx
// 007441b2  33c9                 xor ecx, ecx
// 007441b4  c7001c3a8600         mov dword ptr [eax], 0x863a1c
// 007441ba  894804               mov dword ptr [eax + 4], ecx
// 007441bd  894810               mov dword ptr [eax + 0x10], ecx
// 007441c0  89480c               mov dword ptr [eax + 0xc], ecx
// 007441c3  894808               mov dword ptr [eax + 8], ecx
// 007441c6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007441b0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007441b0();
};
S_func_007441b0::S_func_007441b0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
