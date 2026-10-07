// roc 2011-06 006010e0  unit: RBX::UnifiedWidget  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006010e0
//
// 006010e0  c781a400000000000000 mov dword ptr [ecx + 0xa4], 0
// 006010ea  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006010e0 {
    char pad0[164];
    int m_x;
    void f();
};
void S_func_006010e0::f()
{
    m_x = (int)0;
}
