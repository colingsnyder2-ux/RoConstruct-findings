// roc 2007-08 006a5830  unit: CXTPShortcutManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a5830
//
// 006a5830  8b4130               mov eax, dword ptr [ecx + 0x30]
// 006a5833  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a5830 {
    char pad0[48];
    int m_x;
    int f();
};
int S_func_006a5830::f()
{
    return m_x;
}
