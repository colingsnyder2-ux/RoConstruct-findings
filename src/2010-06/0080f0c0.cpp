// roc 2010-06 0080f0c0  unit: CXTPStatusBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080f0c0
//
// 0080f0c0  8bc1                 mov eax, ecx
// 0080f0c2  33c9                 xor ecx, ecx
// 0080f0c4  c700bc15a600         mov dword ptr [eax], 0xa615bc
// 0080f0ca  894804               mov dword ptr [eax + 4], ecx
// 0080f0cd  894810               mov dword ptr [eax + 0x10], ecx
// 0080f0d0  89480c               mov dword ptr [eax + 0xc], ecx
// 0080f0d3  894808               mov dword ptr [eax + 8], ecx
// 0080f0d6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0080f0c0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0080f0c0();
};
S_func_0080f0c0::S_func_0080f0c0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
