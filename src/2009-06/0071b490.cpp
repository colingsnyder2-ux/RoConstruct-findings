// roc 2009-06 0071b490  unit: CXTPPopupBar  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071b490
//
// 0071b490  8b81d4010000         mov eax, dword ptr [ecx + 0x1d4]
// 0071b496  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0071b490 {
    char pad0[468];
    int m_x;
    int f();
};
int S_func_0071b490::f()
{
    return m_x;
}
