// roc 2007-08 00720590  unit: CXTWindowMap  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720590
//
// 00720590  8bc1                 mov eax, ecx
// 00720592  33c9                 xor ecx, ecx
// 00720594  c700ac227e00         mov dword ptr [eax], 0x7e22ac
// 0072059a  89480c               mov dword ptr [eax + 0xc], ecx
// 0072059d  894808               mov dword ptr [eax + 8], ecx
// 007205a0  894804               mov dword ptr [eax + 4], ecx
// 007205a3  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_00720590
{
    void* p0;
    int z0;
    int z1;
    int z2;
    S_func_00720590();
};
S_func_00720590::S_func_00720590()
{
    p0 = (void*)&G;
    z0 = z1 = z2 = 0;
}
