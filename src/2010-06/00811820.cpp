// roc 2010-06 00811820  unit: CXTSplitterWnd  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00811820
//
// 00811820  8b8108010000         mov eax, dword ptr [ecx + 0x108]
// 00811826  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00811820 {
    char pad0[264];
    int m_x;
    int f();
};
int S_func_00811820::f()
{
    return m_x;
}
