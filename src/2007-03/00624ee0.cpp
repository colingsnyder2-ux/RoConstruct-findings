// roc 2007-03 00624ee0  unit: seg_00620000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00624ee0
//
// 00624ee0  8bc1                 mov eax, ecx
// 00624ee2  33c9                 xor ecx, ecx
// 00624ee4  8908                 mov dword ptr [eax], ecx
// 00624ee6  894808               mov dword ptr [eax + 8], ecx
// 00624ee9  894804               mov dword ptr [eax + 4], ecx
// 00624eec  c7400c01000000       mov dword ptr [eax + 0xc], 1
// 00624ef3  c3                   ret 
// copied from an identical function in another client (function ?Init@CXTPCommandBar@ns_ROCX000004@@QAEPAU12@XZ)

namespace ns_ROCX000004 {
struct CXTPCommandBar {
    int m_n0;
    int m_n4;
    int m_n8;
    int m_nC;
    CXTPCommandBar* Init();
};

CXTPCommandBar* CXTPCommandBar::Init()
{
    m_n0 = 0;
    m_n8 = 0;
    m_n4 = 0;
    m_nC = 1;
    return this;
}
}
