// roc 2009-06 007346f0  unit: CXTPImageManagerResource::CBitmapDC  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007346f0
//
// 007346f0  8bc1                 mov eax, ecx
// 007346f2  33c9                 xor ecx, ecx
// 007346f4  c70050318f00         mov dword ptr [eax], 0x8f3150
// 007346fa  894804               mov dword ptr [eax + 4], ecx
// 007346fd  894810               mov dword ptr [eax + 0x10], ecx
// 00734700  89480c               mov dword ptr [eax + 0xc], ecx
// 00734703  894808               mov dword ptr [eax + 8], ecx
// 00734706  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007346f0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007346f0();
};
S_func_007346f0::S_func_007346f0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
