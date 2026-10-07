// roc 2008-06 0077bbc0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077bbc0
//
// 0077bbc0  8bc1                 mov eax, ecx
// 0077bbc2  33c9                 xor ecx, ecx
// 0077bbc4  c700ac928600         mov dword ptr [eax], 0x8692ac
// 0077bbca  894804               mov dword ptr [eax + 4], ecx
// 0077bbcd  894810               mov dword ptr [eax + 0x10], ecx
// 0077bbd0  89480c               mov dword ptr [eax + 0xc], ecx
// 0077bbd3  894808               mov dword ptr [eax + 8], ecx
// 0077bbd6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_0077bbc0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_0077bbc0();
};
S_func_0077bbc0::S_func_0077bbc0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
