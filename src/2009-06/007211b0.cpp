// roc 2009-06 007211b0  unit: CPatchedControlComboBox  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007211b0
//
// 007211b0  8bc1                 mov eax, ecx
// 007211b2  33c9                 xor ecx, ecx
// 007211b4  c70094218f00         mov dword ptr [eax], 0x8f2194
// 007211ba  894804               mov dword ptr [eax + 4], ecx
// 007211bd  894810               mov dword ptr [eax + 0x10], ecx
// 007211c0  89480c               mov dword ptr [eax + 0xc], ecx
// 007211c3  894808               mov dword ptr [eax + 8], ecx
// 007211c6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007211b0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007211b0();
};
S_func_007211b0::S_func_007211b0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
