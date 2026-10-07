// roc 2011-06 008bc570  unit: CXTPDockingPaneAutoHidePanel  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bc570
//
// 008bc570  8bc1                 mov eax, ecx
// 008bc572  33c9                 xor ecx, ecx
// 008bc574  c700e052ad00         mov dword ptr [eax], 0xad52e0
// 008bc57a  894804               mov dword ptr [eax + 4], ecx
// 008bc57d  894810               mov dword ptr [eax + 0x10], ecx
// 008bc580  89480c               mov dword ptr [eax + 0xc], ecx
// 008bc583  894808               mov dword ptr [eax + 8], ecx
// 008bc586  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008bc570
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008bc570();
};
S_func_008bc570::S_func_008bc570()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
