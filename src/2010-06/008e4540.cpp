// roc 2010-06 008e4540  unit: Ogre::RbxSubEntity  size: 4 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008e4540
//
// 008e4540  8a4150               mov al, byte ptr [ecx + 0x50]
// 008e4543  c3                   ret 
// auto-matched from its assembly shape

struct S_func_008e4540 {
    char pad0[80];
    char m_x;
    char f();
};
char S_func_008e4540::f()
{
    return m_x;
}
