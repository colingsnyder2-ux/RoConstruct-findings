// roc 2008-06 007a1400  unit: CXTPDockingPaneAutoHidePanel  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1400
//
// 007a1400  8b4114               mov eax, dword ptr [ecx + 0x14]
// 007a1403  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007a1400 {
    char pad0[20];
    int m_x;
    int f();
};
int S_func_007a1400::f()
{
    return m_x;
}
