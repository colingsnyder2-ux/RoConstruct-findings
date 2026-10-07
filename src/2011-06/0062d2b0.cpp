// roc 2011-06 0062d2b0  unit: CXTPPopupBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062d2b0
//
// 0062d2b0  8b81d4010000         mov eax, dword ptr [ecx + 0x1d4]
// 0062d2b6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0062d2b0 {
    char pad0[468];
    int m_x;
    int f();
};
int S_func_0062d2b0::f()
{
    return m_x;
}
