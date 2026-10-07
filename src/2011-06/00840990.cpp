// roc 2011-06 00840990  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00840990
//
// 00840990  8bc1                 mov eax, ecx
// 00840992  33c9                 xor ecx, ecx
// 00840994  c700a458ac00         mov dword ptr [eax], 0xac58a4
// 0084099a  894804               mov dword ptr [eax + 4], ecx
// 0084099d  894810               mov dword ptr [eax + 0x10], ecx
// 008409a0  89480c               mov dword ptr [eax + 0xc], ecx
// 008409a3  894808               mov dword ptr [eax + 8], ecx
// 008409a6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00840990
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00840990();
};
S_func_00840990::S_func_00840990()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
