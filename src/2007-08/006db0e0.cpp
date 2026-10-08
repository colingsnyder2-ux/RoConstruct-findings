// roc 2007-08 006db0e0  unit: CXTPDockingPaneAutoHidePanel  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006db0e0
//
// 006db0e0  8bc1                 mov eax, ecx
// 006db0e2  33c9                 xor ecx, ecx
// 006db0e4  c700188f7d00         mov dword ptr [eax], 0x7d8f18
// 006db0ea  894804               mov dword ptr [eax + 4], ecx
// 006db0ed  894810               mov dword ptr [eax + 0x10], ecx
// 006db0f0  89480c               mov dword ptr [eax + 0xc], ecx
// 006db0f3  894808               mov dword ptr [eax + 8], ecx
// 006db0f6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006db0e0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006db0e0();
};
S_func_006db0e0::S_func_006db0e0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
