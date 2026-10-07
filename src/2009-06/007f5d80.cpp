// roc 2009-06 007f5d80  unit: CXTSplitterWnd  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f5d80
//
// 007f5d80  8b8108010000         mov eax, dword ptr [ecx + 0x108]
// 007f5d86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007f5d80 {
    char pad0[264];
    int m_x;
    int f();
};
int S_func_007f5d80::f()
{
    return m_x;
}
