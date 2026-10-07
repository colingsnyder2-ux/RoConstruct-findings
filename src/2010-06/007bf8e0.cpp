// roc 2010-06 007bf8e0  unit: CXTPImageManagerResource::CBitmapDC  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bf8e0
//
// 007bf8e0  8bc1                 mov eax, ecx
// 007bf8e2  33c9                 xor ecx, ecx
// 007bf8e4  c7000874a500         mov dword ptr [eax], 0xa57408
// 007bf8ea  894804               mov dword ptr [eax + 4], ecx
// 007bf8ed  894810               mov dword ptr [eax + 0x10], ecx
// 007bf8f0  89480c               mov dword ptr [eax + 0xc], ecx
// 007bf8f3  894808               mov dword ptr [eax + 8], ecx
// 007bf8f6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007bf8e0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007bf8e0();
};
S_func_007bf8e0::S_func_007bf8e0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
