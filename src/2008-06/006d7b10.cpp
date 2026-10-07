// roc 2008-06 006d7b10  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d7b10
//
// 006d7b10  8bc1                 mov eax, ecx
// 006d7b12  33c9                 xor ecx, ecx
// 006d7b14  c700a0448500         mov dword ptr [eax], 0x8544a0
// 006d7b1a  894804               mov dword ptr [eax + 4], ecx
// 006d7b1d  894810               mov dword ptr [eax + 0x10], ecx
// 006d7b20  89480c               mov dword ptr [eax + 0xc], ecx
// 006d7b23  894808               mov dword ptr [eax + 8], ecx
// 006d7b26  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006d7b10
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006d7b10();
};
S_func_006d7b10::S_func_006d7b10()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
