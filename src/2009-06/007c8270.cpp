// roc 2009-06 007c8270  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c8270
//
// 007c8270  8bc1                 mov eax, ecx
// 007c8272  33c9                 xor ecx, ecx
// 007c8274  c700ec549000         mov dword ptr [eax], 0x9054ec
// 007c827a  894804               mov dword ptr [eax + 4], ecx
// 007c827d  894810               mov dword ptr [eax + 0x10], ecx
// 007c8280  89480c               mov dword ptr [eax + 0xc], ecx
// 007c8283  894808               mov dword ptr [eax + 8], ecx
// 007c8286  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007c8270
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007c8270();
};
S_func_007c8270::S_func_007c8270()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
