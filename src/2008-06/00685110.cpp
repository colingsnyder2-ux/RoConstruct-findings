// from server: 100% by king_originala
// roc 2008-06 00685110  unit: Ogre::RbxSubEntity  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00685110
//
// 00685110  83ec0c               sub esp, 0xc
// 00685113  d94110               fld dword ptr [ecx + 0x10]
// 00685116  8b442410             mov eax, dword ptr [esp + 0x10]
// 0068511a  d91c24               fstp dword ptr [esp]
// 0068511d  50                   push eax
// 0068511e  d94120               fld dword ptr [ecx + 0x20]
// 00685121  8d542404             lea edx, [esp + 4]
// 00685125  d95c2408             fstp dword ptr [esp + 8]
// 00685129  52                   push edx
// 0068512a  d94130               fld dword ptr [ecx + 0x30]
// 0068512d  d95c2410             fstp dword ptr [esp + 0x10]
// 00685131  ff1524478000         call dword ptr [0x804724]
// 00685137  83c40c               add esp, 0xc
// 0068513a  c20400               ret 4

struct Ogre_Vector3 {
    float x;
    float y;
    float z;
};

struct Ogre_ShadowCaster;

extern float (__thiscall *getExtrusionDistance)(
    const Ogre_ShadowCaster*, const Ogre_Vector3&, const void*);

struct Ogre_RbxSubEntity {
    char pad0[0x10];
    float m_a;
    char pad1[0xc];
    float m_b;
    char pad2[0xc];
    float m_c;
    float f(const void* light);
};

float Ogre_RbxSubEntity::f(const void* light)
{
    Ogre_Vector3 v;
    v.x = m_a;
    v.y = m_b;
    v.z = m_c;
    return getExtrusionDistance((const Ogre_ShadowCaster*)this, v, light);
}
