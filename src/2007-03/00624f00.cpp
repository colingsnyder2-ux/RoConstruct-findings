// roc 2007-03 00624f00  unit: seg_00620000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00624f00
//
// 00624f00  8bc1                 mov eax, ecx
// 00624f02  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00624f06  8908                 mov dword ptr [eax], ecx
// 00624f08  33c9                 xor ecx, ecx
// 00624f0a  894808               mov dword ptr [eax + 8], ecx
// 00624f0d  894804               mov dword ptr [eax + 4], ecx
// 00624f10  89480c               mov dword ptr [eax + 0xc], ecx
// 00624f13  c20400               ret 4
// copied from an identical function in another client (function ?construct@CXTPCommandBar@ns_ROCX000005@@QAEPAU12@H@Z)

namespace ns_ROCX000005 {
struct CXTPCommandBar
{
    int m_field0;
    int m_field4;
    int m_field8;
    int m_fieldC;
    CXTPCommandBar* construct(int value);
};

CXTPCommandBar* CXTPCommandBar::construct(int value)
{
    m_field0 = value;
    m_field8 = 0;
    m_field4 = 0;
    m_fieldC = 0;
    return this;
}
}
