// roc 2010-06 005dd8e0  unit: RBX::UnifiedWidget  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005dd8e0
//
// 005dd8e0  c781a800000000000000 mov dword ptr [ecx + 0xa8], 0
// 005dd8ea  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005dd8e0 {
    char pad0[168];
    int m_x;
    void f();
};
void S_func_005dd8e0::f()
{
    m_x = (int)0;
}
