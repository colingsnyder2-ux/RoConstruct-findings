// roc 2010-06 007d2b00  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d2b00
//
// 007d2b00  8bc1                 mov eax, ecx
// 007d2b02  33c9                 xor ecx, ecx
// 007d2b04  c700dc91a500         mov dword ptr [eax], 0xa591dc
// 007d2b0a  894804               mov dword ptr [eax + 4], ecx
// 007d2b0d  894810               mov dword ptr [eax + 0x10], ecx
// 007d2b10  89480c               mov dword ptr [eax + 0xc], ecx
// 007d2b13  894808               mov dword ptr [eax + 8], ecx
// 007d2b16  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007d2b00
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007d2b00();
};
S_func_007d2b00::S_func_007d2b00()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
