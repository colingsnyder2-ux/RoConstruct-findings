// roc 2010-06 0085f3b0  unit: CXTPDockingPaneAutoHidePanel  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085f3b0
//
// 0085f3b0  8bc1                 mov eax, ecx
// 0085f3b2  33c9                 xor ecx, ecx
// 0085f3b4  c700c8a8a600         mov dword ptr [eax], 0xa6a8c8
// 0085f3ba  894804               mov dword ptr [eax + 4], ecx
// 0085f3bd  894810               mov dword ptr [eax + 0x10], ecx
// 0085f3c0  89480c               mov dword ptr [eax + 0xc], ecx
// 0085f3c3  894808               mov dword ptr [eax + 8], ecx
// 0085f3c6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0085f3b0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0085f3b0();
};
S_func_0085f3b0::S_func_0085f3b0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
