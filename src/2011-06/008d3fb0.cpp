// roc 2011-06 008d3fb0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3fb0
//
// 008d3fb0  8bc1                 mov eax, ecx
// 008d3fb2  33c9                 xor ecx, ecx
// 008d3fb4  c7009079ad00         mov dword ptr [eax], 0xad7990
// 008d3fba  894804               mov dword ptr [eax + 4], ecx
// 008d3fbd  894810               mov dword ptr [eax + 0x10], ecx
// 008d3fc0  89480c               mov dword ptr [eax + 0xc], ecx
// 008d3fc3  894808               mov dword ptr [eax + 8], ecx
// 008d3fc6  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern char G;
struct S_func_008d3fb0
{
    void* p0;
    int z0;
    int z1;
    int z2;
    int z3;
    S_func_008d3fb0();
};
S_func_008d3fb0::S_func_008d3fb0()
{
    p0 = (void*)&G;
    z0 = 0;
    z1 = z2 = z3 = 0;
}
