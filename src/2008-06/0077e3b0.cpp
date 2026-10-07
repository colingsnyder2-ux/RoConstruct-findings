// roc 2008-06 0077e3b0  unit: CXTPTabPaintManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077e3b0
//
// 0077e3b0  8bc1                 mov eax, ecx
// 0077e3b2  33c9                 xor ecx, ecx
// 0077e3b4  c7009c968600         mov dword ptr [eax], 0x86969c
// 0077e3ba  894804               mov dword ptr [eax + 4], ecx
// 0077e3bd  894810               mov dword ptr [eax + 0x10], ecx
// 0077e3c0  89480c               mov dword ptr [eax + 0xc], ecx
// 0077e3c3  894808               mov dword ptr [eax + 8], ecx
// 0077e3c6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0077e3b0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0077e3b0();
};
S_func_0077e3b0::S_func_0077e3b0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
