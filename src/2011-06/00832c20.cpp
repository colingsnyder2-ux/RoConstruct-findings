// roc 2011-06 00832c20  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00832c20
//
// 00832c20  8bc1                 mov eax, ecx
// 00832c22  33c9                 xor ecx, ecx
// 00832c24  c700744bac00         mov dword ptr [eax], 0xac4b74
// 00832c2a  894804               mov dword ptr [eax + 4], ecx
// 00832c2d  894810               mov dword ptr [eax + 0x10], ecx
// 00832c30  89480c               mov dword ptr [eax + 0xc], ecx
// 00832c33  894808               mov dword ptr [eax + 8], ecx
// 00832c36  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00832c20
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00832c20();
};
S_func_00832c20::S_func_00832c20()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
