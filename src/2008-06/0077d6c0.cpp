// roc 2008-06 0077d6c0  unit: CXTPTabPaintManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077d6c0
//
// 0077d6c0  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 0077d6c6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0077d6c0 {
    char pad0[260];
    int m_x;
    int f();
};
int S_func_0077d6c0::f()
{
    return m_x;
}
