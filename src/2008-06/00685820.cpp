// from server: 100% by colin
// roc 2008-06 00685820  unit: Ogre::RbxSubEntity  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00685820
//
// 00685820  d9442404             fld dword ptr [esp + 4]
// 00685824  d99938010000         fstp dword ptr [ecx + 0x138]
// 0068582a  c20400               ret 4

struct RbxSubEntity {
    char pad[0x138];
    float value;
    void setValue(float v);
};

void RbxSubEntity::setValue(float v) {
    value = v;
}
