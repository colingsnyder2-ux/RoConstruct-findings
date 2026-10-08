// roc 2007-08 006fe090  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fe090
//
// 006fe090  8bc1                 mov eax, ecx
// 006fe092  33c9                 xor ecx, ecx
// 006fe094  c7005cce7d00         mov dword ptr [eax], 0x7dce5c
// 006fe09a  894804               mov dword ptr [eax + 4], ecx
// 006fe09d  894810               mov dword ptr [eax + 0x10], ecx
// 006fe0a0  89480c               mov dword ptr [eax + 0xc], ecx
// 006fe0a3  894808               mov dword ptr [eax + 8], ecx
// 006fe0a6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_006fe090
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_006fe090();
};
S_func_006fe090::S_func_006fe090()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
