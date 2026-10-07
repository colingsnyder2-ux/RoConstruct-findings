// roc 2009-06 00752b10  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00752b10
//
// 00752b10  8bc1                 mov eax, ecx
// 00752b12  33c9                 xor ecx, ecx
// 00752b14  c700b05d8f00         mov dword ptr [eax], 0x8f5db0
// 00752b1a  894804               mov dword ptr [eax + 4], ecx
// 00752b1d  894810               mov dword ptr [eax + 0x10], ecx
// 00752b20  89480c               mov dword ptr [eax + 0xc], ecx
// 00752b23  894808               mov dword ptr [eax + 8], ecx
// 00752b26  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00752b10
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00752b10();
};
S_func_00752b10::S_func_00752b10()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
