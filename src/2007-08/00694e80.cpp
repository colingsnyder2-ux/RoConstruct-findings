// roc 2007-08 00694e80  unit: CXTPToolTipContext::CStandardToolTip  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00694e80
//
// 00694e80  8bc1                 mov eax, ecx
// 00694e82  33c9                 xor ecx, ecx
// 00694e84  c700ac0e7d00         mov dword ptr [eax], 0x7d0eac
// 00694e8a  894804               mov dword ptr [eax + 4], ecx
// 00694e8d  894810               mov dword ptr [eax + 0x10], ecx
// 00694e90  89480c               mov dword ptr [eax + 0xc], ecx
// 00694e93  894808               mov dword ptr [eax + 8], ecx
// 00694e96  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00694e80
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00694e80();
};
S_func_00694e80::S_func_00694e80()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
