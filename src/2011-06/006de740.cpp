// roc 2011-06 006de740  unit: RBX::VPhysicsService::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006de740
//
// 006de740  d981bc000000         fld dword ptr [ecx + 0xbc]
// 006de746  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006de740 {
    char pad[188];
    float m_x;
    float f();
};
float S_func_006de740::f()
{
    return m_x;
}
