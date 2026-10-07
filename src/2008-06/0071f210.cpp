// roc 2008-06 0071f210  unit: CXTPShortcutManager  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f210
//
// 0071f210  8b01                 mov eax, dword ptr [ecx]
// 0071f212  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0071f210 {
    int m_x;
    int f();
};
int S_func_0071f210::f()
{
    return m_x;
}
