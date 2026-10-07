// roc 2007-08 006d36c0  unit: CXTPReportRow_Batch  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006d36c0
//
// 006d36c0  8bc1                 mov eax, ecx
// 006d36c2  33c9                 xor ecx, ecx
// 006d36c4  c7008c827d00         mov dword ptr [eax], 0x7d828c
// 006d36ca  894804               mov dword ptr [eax + 4], ecx
// 006d36cd  894810               mov dword ptr [eax + 0x10], ecx
// 006d36d0  89480c               mov dword ptr [eax + 0xc], ecx
// 006d36d3  894808               mov dword ptr [eax + 8], ecx
// 006d36d6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006d36c0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006d36c0();
};
S_func_006d36c0::S_func_006d36c0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
