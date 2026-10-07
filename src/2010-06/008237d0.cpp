// roc 2010-06 008237d0  unit: CXTPDockingPaneAutoHidePanel  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008237d0
//
// 008237d0  8b4114               mov eax, dword ptr [ecx + 0x14]
// 008237d3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008237d0 {
    char pad0[20];
    int m_x;
    int f();
};
int S_func_008237d0::f()
{
    return m_x;
}
