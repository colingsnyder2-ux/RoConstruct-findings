// roc 2011-06 00947060  unit: Ogre::RbxSubEntity  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00947060
//
// 00947060  d98164010000         fld dword ptr [ecx + 0x164]
// 00947066  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00947060 {
    char pad[356];
    float m_x;
    float f();
};
float S_func_00947060::f()
{
    return m_x;
}
