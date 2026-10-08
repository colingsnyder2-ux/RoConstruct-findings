// roc 2007-08 005aca80  unit: RBX::World  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aca80
//
// 005aca80  d981dc010000         fld dword ptr [ecx + 0x1dc]
// 005aca86  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005aca80 {
    char pad[476];
    float m_x;
    float f();
};
float S_func_005aca80::f()
{
    return m_x;
}
