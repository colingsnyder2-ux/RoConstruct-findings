// roc 2010-06 008571e0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008571e0
//
// 008571e0  8bc1                 mov eax, ecx
// 008571e2  33c9                 xor ecx, ecx
// 008571e4  c7004c9ca600         mov dword ptr [eax], 0xa69c4c
// 008571ea  894804               mov dword ptr [eax + 4], ecx
// 008571ed  894810               mov dword ptr [eax + 0x10], ecx
// 008571f0  89480c               mov dword ptr [eax + 0xc], ecx
// 008571f3  894808               mov dword ptr [eax + 8], ecx
// 008571f6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008571e0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008571e0();
};
S_func_008571e0::S_func_008571e0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
