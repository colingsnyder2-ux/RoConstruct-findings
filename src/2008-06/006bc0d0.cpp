// roc 2008-06 006bc0d0  unit: CXTPImageManagerResource::CBitmapDC  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bc0d0
//
// 006bc0d0  8bc1                 mov eax, ecx
// 006bc0d2  33c9                 xor ecx, ecx
// 006bc0d4  c700c0208500         mov dword ptr [eax], 0x8520c0
// 006bc0da  894804               mov dword ptr [eax + 4], ecx
// 006bc0dd  894810               mov dword ptr [eax + 0x10], ecx
// 006bc0e0  89480c               mov dword ptr [eax + 0xc], ecx
// 006bc0e3  894808               mov dword ptr [eax + 8], ecx
// 006bc0e6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006bc0d0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006bc0d0();
};
S_func_006bc0d0::S_func_006bc0d0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
