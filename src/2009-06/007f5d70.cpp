// roc 2009-06 007f5d70  unit: CXTPTabPaintManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f5d70
//
// 007f5d70  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 007f5d76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007f5d70 {
    char pad0[260];
    int m_x;
    int f();
};
int S_func_007f5d70::f()
{
    return m_x;
}
