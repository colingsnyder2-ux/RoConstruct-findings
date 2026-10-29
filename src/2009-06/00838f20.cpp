// roc 2009-06 00838f20  unit: Ogre::RbxSubEntity  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00838f20
//
// 00838f20  83ec0c               sub esp, 0xc
// 00838f23  d94110               fld dword ptr [ecx + 0x10]
// 00838f26  8b442410             mov eax, dword ptr [esp + 0x10]
// 00838f2a  d91c24               fstp dword ptr [esp]
// 00838f2d  50                   push eax
// 00838f2e  d94120               fld dword ptr [ecx + 0x20]
// 00838f31  8d542404             lea edx, [esp + 4]
// 00838f35  d95c2408             fstp dword ptr [esp + 8]
// 00838f39  52                   push edx
// 00838f3a  d94130               fld dword ptr [ecx + 0x30]
// 00838f3d  d95c2410             fstp dword ptr [esp + 0x10]
// 00838f41  ff15b0038a00         call dword ptr [0x8a03b0]
// 00838f47  83c40c               add esp, 0xc
// 00838f4a  c20400               ret 4
// copied from an identical function in another client (function ?f@Ogre_RbxSubEntity@@QAEMPBX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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