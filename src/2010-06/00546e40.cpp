// roc 2010-06 00546e40  unit: RBX::RbxG3D::Material  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00546e40
//
// 00546e40  8b442404             mov eax, dword ptr [esp + 4]
// 00546e44  6bc034               imul eax, eax, 0x34
// 00546e47  03410c               add eax, dword ptr [ecx + 0xc]
// 00546e4a  c20400               ret 4
// copied from an identical function in another client (function ?f@S_005df7d0@ns_ROCX000003@@QAEHH@Z)

namespace ns_ROCX000003 {
struct S_005df7d0 {
    int pad0[3];
    int m_value;
    int f(int value);
};

int S_005df7d0::f(int value)
{
    return value * 0x34 + m_value;
}
}
