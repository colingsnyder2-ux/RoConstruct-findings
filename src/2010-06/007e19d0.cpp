// roc 2010-06 007e19d0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e19d0
//
// 007e19d0  8bc1                 mov eax, ecx
// 007e19d2  33c9                 xor ecx, ecx
// 007e19d4  c70028a5a500         mov dword ptr [eax], 0xa5a528
// 007e19da  894804               mov dword ptr [eax + 4], ecx
// 007e19dd  894810               mov dword ptr [eax + 0x10], ecx
// 007e19e0  89480c               mov dword ptr [eax + 0xc], ecx
// 007e19e3  894808               mov dword ptr [eax + 8], ecx
// 007e19e6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007e19d0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007e19d0();
};
S_func_007e19d0::S_func_007e19d0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
