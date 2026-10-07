// roc 2011-06 009013b0  unit: CXTPDockingPaneAutoHidePanel  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009013b0
//
// 009013b0  8b4114               mov eax, dword ptr [ecx + 0x14]
// 009013b3  c3                   ret 
// auto-matched from its assembly shape

struct S_func_009013b0 {
    char pad0[20];
    int m_x;
    int f();
};
int S_func_009013b0::f()
{
    return m_x;
}
