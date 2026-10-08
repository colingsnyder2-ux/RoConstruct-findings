// roc 2007-08 00663dd0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00663dd0
//
// 00663dd0  8bc1                 mov eax, ecx
// 00663dd2  33c9                 xor ecx, ecx
// 00663dd4  c70074967c00         mov dword ptr [eax], 0x7c9674
// 00663dda  894804               mov dword ptr [eax + 4], ecx
// 00663ddd  894810               mov dword ptr [eax + 0x10], ecx
// 00663de0  89480c               mov dword ptr [eax + 0xc], ecx
// 00663de3  894808               mov dword ptr [eax + 8], ecx
// 00663de6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00663dd0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00663dd0();
};
S_func_00663dd0::S_func_00663dd0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
