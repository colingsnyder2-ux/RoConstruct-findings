// roc 2008-06 00716620  unit: CXTPPropertyGridView  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00716620
//
// 00716620  8bc1                 mov eax, ecx
// 00716622  33c9                 xor ecx, ecx
// 00716624  c700acdd8500         mov dword ptr [eax], 0x85ddac
// 0071662a  894804               mov dword ptr [eax + 4], ecx
// 0071662d  894810               mov dword ptr [eax + 0x10], ecx
// 00716630  89480c               mov dword ptr [eax + 0xc], ecx
// 00716633  894808               mov dword ptr [eax + 8], ecx
// 00716636  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00716620
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_00716620();
};
S_func_00716620::S_func_00716620()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
