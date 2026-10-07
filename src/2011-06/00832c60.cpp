// roc 2011-06 00832c60  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00832c60
//
// 00832c60  8bc1                 mov eax, ecx
// 00832c62  33c9                 xor ecx, ecx
// 00832c64  c7008c4bac00         mov dword ptr [eax], 0xac4b8c
// 00832c6a  894804               mov dword ptr [eax + 4], ecx
// 00832c6d  894810               mov dword ptr [eax + 0x10], ecx
// 00832c70  89480c               mov dword ptr [eax + 0xc], ecx
// 00832c73  894808               mov dword ptr [eax + 8], ecx
// 00832c76  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00832c60
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00832c60();
};
S_func_00832c60::S_func_00832c60()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
