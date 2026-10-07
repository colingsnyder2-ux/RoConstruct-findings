// roc 2011-06 00843330  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00843330
//
// 00843330  8bc1                 mov eax, ecx
// 00843332  33c9                 xor ecx, ecx
// 00843334  c7007061ac00         mov dword ptr [eax], 0xac6170
// 0084333a  894804               mov dword ptr [eax + 4], ecx
// 0084333d  894810               mov dword ptr [eax + 0x10], ecx
// 00843340  89480c               mov dword ptr [eax + 0xc], ecx
// 00843343  894808               mov dword ptr [eax + 8], ecx
// 00843346  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00843330
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00843330();
};
S_func_00843330::S_func_00843330()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
