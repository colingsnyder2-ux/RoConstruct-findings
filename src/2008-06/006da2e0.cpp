// roc 2008-06 006da2e0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006da2e0
//
// 006da2e0  8bc1                 mov eax, ecx
// 006da2e2  33c9                 xor ecx, ecx
// 006da2e4  c700684d8500         mov dword ptr [eax], 0x854d68
// 006da2ea  894804               mov dword ptr [eax + 4], ecx
// 006da2ed  894810               mov dword ptr [eax + 0x10], ecx
// 006da2f0  89480c               mov dword ptr [eax + 0xc], ecx
// 006da2f3  894808               mov dword ptr [eax + 8], ecx
// 006da2f6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006da2e0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006da2e0();
};
S_func_006da2e0::S_func_006da2e0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
