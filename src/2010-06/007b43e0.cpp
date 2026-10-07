// roc 2010-06 007b43e0  unit: CXTPPopupBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b43e0
//
// 007b43e0  8b81d4010000         mov eax, dword ptr [ecx + 0x1d4]
// 007b43e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007b43e0 {
    char pad0[468];
    int m_x;
    int f();
};
int S_func_007b43e0::f()
{
    return m_x;
}
