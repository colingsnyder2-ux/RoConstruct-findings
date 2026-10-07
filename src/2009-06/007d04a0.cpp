// roc 2009-06 007d04a0  unit: CXTPDockingPaneAutoHidePanel  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d04a0
//
// 007d04a0  8bc1                 mov eax, ecx
// 007d04a2  33c9                 xor ecx, ecx
// 007d04a4  c70070619000         mov dword ptr [eax], 0x906170
// 007d04aa  894804               mov dword ptr [eax + 4], ecx
// 007d04ad  894810               mov dword ptr [eax + 0x10], ecx
// 007d04b0  89480c               mov dword ptr [eax + 0xc], ecx
// 007d04b3  894808               mov dword ptr [eax + 8], ecx
// 007d04b6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007d04a0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007d04a0();
};
S_func_007d04a0::S_func_007d04a0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
