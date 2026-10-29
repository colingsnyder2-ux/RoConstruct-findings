// roc 2010-06 008e3f10  unit: Ogre::RbxSubEntity  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008e3f10
//
// 008e3f10  8b442404             mov eax, dword ptr [esp + 4]
// 008e3f14  85c0                 test eax, eax
// 008e3f16  7506                 jne 0x8e3f1e
// 008e3f18  8b4164               mov eax, dword ptr [ecx + 0x64]
// 008e3f1b  c20400               ret 4
// 008e3f1e  8b84815c010000       mov eax, dword ptr [ecx + eax*4 + 0x15c]
// 008e3f25  c20400               ret 4
// copied from an identical function in another client (function ?f@RbxSubEntity_0048fd00@ns_ROCX000016@@QAEHH@Z)

namespace ns_ROCX000016 {
struct RbxSubEntity_0048fd00
{
    char pad0[100];
    int m_value;
    char pad1[248];
    int m_items[64];

    int f(int index);
};

int RbxSubEntity_0048fd00::f(int index)
{
    if (index == 0)
        return m_value;
    return m_items[index - 1];
}
}
