// roc 2007-03 005aea60  unit: seg_005a0000  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005aea60
//
// 005aea60  8b442404             mov eax, dword ptr [esp + 4]
// 005aea64  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 005aea67  7403                 je 0x5aea6c
// 005aea69  894120               mov dword ptr [ecx + 0x20], eax
// 005aea6c  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@Geometry@ns_ROCX000018@@QAEXH@Z)

namespace ns_ROCX000018 {
struct Geometry {
    char pad[0x20];
    int m_value;
    void SetValue(int value);
};

void Geometry::SetValue(int value)
{
    if (value != m_value)
        m_value = value;
}
}
