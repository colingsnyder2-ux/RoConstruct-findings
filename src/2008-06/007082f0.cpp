// roc 2008-06 007082f0  unit: CXTSplitterWnd  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007082f0
//
// 007082f0  8b8108010000         mov eax, dword ptr [ecx + 0x108]
// 007082f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007082f0 {
    char pad0[264];
    int m_x;
    int f();
};
int S_func_007082f0::f()
{
    return m_x;
}
