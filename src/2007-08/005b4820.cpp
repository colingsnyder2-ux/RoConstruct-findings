// from server: 100% by colin
// roc 2007-08 005b4820  unit: RBX::Geometry  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4820
//
// 005b4820  8b442404             mov eax, dword ptr [esp + 4]
// 005b4824  3b4120               cmp eax, dword ptr [ecx + 0x20]
// 005b4827  7403                 je 0x5b482c
// 005b4829  894120               mov dword ptr [ecx + 0x20], eax
// 005b482c  c20400               ret 4

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
