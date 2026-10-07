// roc 2010-06 008e4570  unit: Ogre::RbxSubEntity  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008e4570
//
// 008e4570  d98168010000         fld dword ptr [ecx + 0x168]
// 008e4576  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008e4570 {
    char pad[360];
    float m_x;
    float f();
};
float S_func_008e4570::f()
{
    return m_x;
}
