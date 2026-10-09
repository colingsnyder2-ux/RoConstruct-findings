// roc 2009-12 0081a3a0  unit: CXTPShortcutManager  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081a3a0
//
// 0081a3a0  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0081a3a3  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0073f490@ns_ROCX000079@@QAEHXZ)

namespace ns_ROCX000079 {
struct S_func_0073f490 {
    char pad0[48];
    int m_x;
    int f();
};
int S_func_0073f490::f()
{
    return m_x;
}
}
