// roc 2009-06 00752ad0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00752ad0
//
// 00752ad0  8bc1                 mov eax, ecx
// 00752ad2  33c9                 xor ecx, ecx
// 00752ad4  c700985d8f00         mov dword ptr [eax], 0x8f5d98
// 00752ada  894804               mov dword ptr [eax + 4], ecx
// 00752add  894810               mov dword ptr [eax + 0x10], ecx
// 00752ae0  89480c               mov dword ptr [eax + 0xc], ecx
// 00752ae3  894808               mov dword ptr [eax + 8], ecx
// 00752ae6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00752ad0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00752ad0();
};
S_func_00752ad0::S_func_00752ad0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
