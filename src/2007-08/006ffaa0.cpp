// roc 2007-08 006ffaa0  unit: CXTSplitterWnd  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ffaa0
//
// 006ffaa0  8b8108010000         mov eax, dword ptr [ecx + 0x108]
// 006ffaa6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006ffaa0 {
    char pad0[264];
    int m_x;
    int f();
};
int S_func_006ffaa0::f()
{
    return m_x;
}
