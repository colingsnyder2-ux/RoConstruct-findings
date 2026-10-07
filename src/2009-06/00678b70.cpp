// roc 2009-06 00678b70  unit: RBX::VPhysicsService::?$EventDesc  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00678b70
//
// 00678b70  d98184010000         fld dword ptr [ecx + 0x184]
// 00678b76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00678b70 {
    char pad[388];
    float m_x;
    float f();
};
float S_func_00678b70::f()
{
    return m_x;
}
