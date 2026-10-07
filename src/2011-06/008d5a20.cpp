// roc 2011-06 008d5a20  unit: CXTSplitterWnd  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d5a20
//
// 008d5a20  8b8108010000         mov eax, dword ptr [ecx + 0x108]
// 008d5a26  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008d5a20 {
    char pad0[264];
    int m_x;
    int f();
};
int S_func_008d5a20::f()
{
    return m_x;
}
