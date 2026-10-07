// roc 2010-06 008857c0  unit: CXTPTabPaintManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008857c0
//
// 008857c0  8bc1                 mov eax, ecx
// 008857c2  33c9                 xor ecx, ecx
// 008857c4  c7002ceea600         mov dword ptr [eax], 0xa6ee2c
// 008857ca  894804               mov dword ptr [eax + 4], ecx
// 008857cd  894810               mov dword ptr [eax + 0x10], ecx
// 008857d0  89480c               mov dword ptr [eax + 0xc], ecx
// 008857d3  894808               mov dword ptr [eax + 8], ecx
// 008857d6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008857c0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008857c0();
};
S_func_008857c0::S_func_008857c0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
