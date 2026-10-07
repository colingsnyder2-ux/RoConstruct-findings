// roc 2010-06 007e1a10  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e1a10
//
// 007e1a10  8bc1                 mov eax, ecx
// 007e1a12  33c9                 xor ecx, ecx
// 007e1a14  c70040a5a500         mov dword ptr [eax], 0xa5a540
// 007e1a1a  894804               mov dword ptr [eax + 4], ecx
// 007e1a1d  894810               mov dword ptr [eax + 0x10], ecx
// 007e1a20  89480c               mov dword ptr [eax + 0xc], ecx
// 007e1a23  894808               mov dword ptr [eax + 8], ecx
// 007e1a26  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007e1a10
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007e1a10();
};
S_func_007e1a10::S_func_007e1a10()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
