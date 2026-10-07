// roc 2010-06 00884af0  unit: CXTPTabPaintManager  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00884af0
//
// 00884af0  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 00884af6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00884af0 {
    char pad0[260];
    int m_x;
    int f();
};
int S_func_00884af0::f()
{
    return m_x;
}
