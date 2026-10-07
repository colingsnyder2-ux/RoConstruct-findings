// roc 2010-06 007f4bd0  unit: CXTPCustomizeCommandsPage  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f4bd0
//
// 007f4bd0  8bc1                 mov eax, ecx
// 007f4bd2  33c9                 xor ecx, ecx
// 007f4bd4  c70050dea500         mov dword ptr [eax], 0xa5de50
// 007f4bda  894804               mov dword ptr [eax + 4], ecx
// 007f4bdd  894810               mov dword ptr [eax + 0x10], ecx
// 007f4be0  89480c               mov dword ptr [eax + 0xc], ecx
// 007f4be3  894808               mov dword ptr [eax + 8], ecx
// 007f4be6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007f4bd0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007f4bd0();
};
S_func_007f4bd0::S_func_007f4bd0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
