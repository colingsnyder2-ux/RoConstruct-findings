// roc 2007-08 005b4550  unit: RBX::Block  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4550
//
// 005b4550  d94114               fld dword ptr [ecx + 0x14]
// 005b4553  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005b4550 {
    char pad[20];
    float m_x;
    float f();
};
float S_func_005b4550::f()
{
    return m_x;
}
