// roc 2011-06 008b8490  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8490
//
// 008b8490  8bc1                 mov eax, ecx
// 008b8492  33c9                 xor ecx, ecx
// 008b8494  c700144ead00         mov dword ptr [eax], 0xad4e14
// 008b849a  894804               mov dword ptr [eax + 4], ecx
// 008b849d  894810               mov dword ptr [eax + 0x10], ecx
// 008b84a0  89480c               mov dword ptr [eax + 0xc], ecx
// 008b84a3  894808               mov dword ptr [eax + 8], ecx
// 008b84a6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008b8490
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008b8490();
};
S_func_008b8490::S_func_008b8490()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
