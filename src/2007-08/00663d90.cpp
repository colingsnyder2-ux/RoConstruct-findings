// roc 2007-08 00663d90  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00663d90
//
// 00663d90  8bc1                 mov eax, ecx
// 00663d92  33c9                 xor ecx, ecx
// 00663d94  c7005c967c00         mov dword ptr [eax], 0x7c965c
// 00663d9a  894804               mov dword ptr [eax + 4], ecx
// 00663d9d  894810               mov dword ptr [eax + 0x10], ecx
// 00663da0  89480c               mov dword ptr [eax + 0xc], ecx
// 00663da3  894808               mov dword ptr [eax + 8], ecx
// 00663da6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00663d90
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00663d90();
};
S_func_00663d90::S_func_00663d90()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
