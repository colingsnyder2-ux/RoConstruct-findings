// roc 2008-06 005cf4e0  unit: RBX::UnifiedWidget  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf4e0
//
// 005cf4e0  c7814401000000000000 mov dword ptr [ecx + 0x144], 0
// 005cf4ea  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005cf4e0 {
    char pad0[324];
    int m_x;
    void f();
};
void S_func_005cf4e0::f()
{
    m_x = (int)0;
}
