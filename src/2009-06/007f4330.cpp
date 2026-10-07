// roc 2009-06 007f4330  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f4330
//
// 007f4330  8bc1                 mov eax, ecx
// 007f4332  33c9                 xor ecx, ecx
// 007f4334  c700d4a29000         mov dword ptr [eax], 0x90a2d4
// 007f433a  894804               mov dword ptr [eax + 4], ecx
// 007f433d  894810               mov dword ptr [eax + 0x10], ecx
// 007f4340  89480c               mov dword ptr [eax + 0xc], ecx
// 007f4343  894808               mov dword ptr [eax + 8], ecx
// 007f4346  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_007f4330
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_007f4330();
};
S_func_007f4330::S_func_007f4330()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
