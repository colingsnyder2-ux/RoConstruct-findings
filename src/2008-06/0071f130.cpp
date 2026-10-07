// roc 2008-06 0071f130  unit: CXTPShortcutManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f130
//
// 0071f130  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0071f133  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0071f130 {
    char pad0[48];
    int m_x;
    int f();
};
int S_func_0071f130::f()
{
    return m_x;
}
