// roc 2007-08 006d2a80  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2a80
//
// 006d2a80  8bc1                 mov eax, ecx
// 006d2a82  33c9                 xor ecx, ecx
// 006d2a84  c700fc807d00         mov dword ptr [eax], 0x7d80fc
// 006d2a8a  894804               mov dword ptr [eax + 4], ecx
// 006d2a8d  894810               mov dword ptr [eax + 0x10], ecx
// 006d2a90  89480c               mov dword ptr [eax + 0xc], ecx
// 006d2a93  894808               mov dword ptr [eax + 8], ecx
// 006d2a96  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006d2a80
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006d2a80();
};
S_func_006d2a80::S_func_006d2a80()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
