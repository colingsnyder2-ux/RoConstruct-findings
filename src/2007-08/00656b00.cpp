// roc 2007-08 00656b00  unit: CXTPReportControl  size: 23 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00656b00
//
// 00656b00  8bc1                 mov eax, ecx
// 00656b02  33c9                 xor ecx, ecx
// 00656b04  c700cc837c00         mov dword ptr [eax], 0x7c83cc
// 00656b0a  894804               mov dword ptr [eax + 4], ecx
// 00656b0d  894810               mov dword ptr [eax + 0x10], ecx
// 00656b10  89480c               mov dword ptr [eax + 0xc], ecx
// 00656b13  894808               mov dword ptr [eax + 8], ecx
// 00656b16  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00656b00
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00656b00();
};
S_func_00656b00::S_func_00656b00()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
