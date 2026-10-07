// roc 2009-06 00743c20  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00743c20
//
// 00743c20  8bc1                 mov eax, ecx
// 00743c22  33c9                 xor ecx, ecx
// 00743c24  c7005c4a8f00         mov dword ptr [eax], 0x8f4a5c
// 00743c2a  894804               mov dword ptr [eax + 4], ecx
// 00743c2d  894810               mov dword ptr [eax + 0x10], ecx
// 00743c30  89480c               mov dword ptr [eax + 0xc], ecx
// 00743c33  894808               mov dword ptr [eax + 8], ecx
// 00743c36  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00743c20
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00743c20();
};
S_func_00743c20::S_func_00743c20()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
