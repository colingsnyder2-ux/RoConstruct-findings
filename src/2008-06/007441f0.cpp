// roc 2008-06 007441f0  unit: CXTPControlEditCtrl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007441f0
//
// 007441f0  8bc1                 mov eax, ecx
// 007441f2  33c9                 xor ecx, ecx
// 007441f4  c700343a8600         mov dword ptr [eax], 0x863a34
// 007441fa  894804               mov dword ptr [eax + 4], ecx
// 007441fd  894810               mov dword ptr [eax + 0x10], ecx
// 00744200  89480c               mov dword ptr [eax + 0xc], ecx
// 00744203  894808               mov dword ptr [eax + 8], ecx
// 00744206  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007441f0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007441f0();
};
S_func_007441f0::S_func_007441f0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
