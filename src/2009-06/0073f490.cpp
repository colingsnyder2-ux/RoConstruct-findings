// roc 2009-06 0073f490  unit: CXTPShortcutManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073f490
//
// 0073f490  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0073f493  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0073f490 {
    char pad0[48];
    int m_x;
    int f();
};
int S_func_0073f490::f()
{
    return m_x;
}
