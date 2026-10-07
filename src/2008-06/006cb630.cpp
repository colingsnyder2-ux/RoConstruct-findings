// roc 2008-06 006cb630  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb630
//
// 006cb630  8bc1                 mov eax, ecx
// 006cb632  33c9                 xor ecx, ecx
// 006cb634  c7000c3a8500         mov dword ptr [eax], 0x853a0c
// 006cb63a  894804               mov dword ptr [eax + 4], ecx
// 006cb63d  894810               mov dword ptr [eax + 0x10], ecx
// 006cb640  89480c               mov dword ptr [eax + 0xc], ecx
// 006cb643  894808               mov dword ptr [eax + 8], ecx
// 006cb646  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006cb630
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006cb630();
};
S_func_006cb630::S_func_006cb630()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
