// roc 2008-06 0074ef80  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074ef80
//
// 0074ef80  8bc1                 mov eax, ecx
// 0074ef82  33c9                 xor ecx, ecx
// 0074ef84  c70094438600         mov dword ptr [eax], 0x864394
// 0074ef8a  894804               mov dword ptr [eax + 4], ecx
// 0074ef8d  894810               mov dword ptr [eax + 0x10], ecx
// 0074ef90  89480c               mov dword ptr [eax + 0xc], ecx
// 0074ef93  894808               mov dword ptr [eax + 8], ecx
// 0074ef96  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0074ef80
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0074ef80();
};
S_func_0074ef80::S_func_0074ef80()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
