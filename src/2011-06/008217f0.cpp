// roc 2011-06 008217f0  unit: CXTPImageManagerResource::CBitmapDC  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008217f0
//
// 008217f0  8bc1                 mov eax, ecx
// 008217f2  33c9                 xor ecx, ecx
// 008217f4  c7002030ac00         mov dword ptr [eax], 0xac3020
// 008217fa  894804               mov dword ptr [eax + 4], ecx
// 008217fd  894810               mov dword ptr [eax + 0x10], ecx
// 00821800  89480c               mov dword ptr [eax + 0xc], ecx
// 00821803  894808               mov dword ptr [eax + 8], ecx
// 00821806  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008217f0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008217f0();
};
S_func_008217f0::S_func_008217f0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
