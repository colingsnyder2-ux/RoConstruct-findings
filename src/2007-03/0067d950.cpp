// roc 2007-03 0067d950  unit: seg_00670000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067d950
//
// 0067d950  81793050000500       cmp dword ptr [ecx + 0x30], 0x50050
// 0067d957  1bc0                 sbb eax, eax
// 0067d959  83c001               add eax, 1
// 0067d95c  c3                   ret 
// copied from an identical function in another client (function ?IsCustom@CXTPStatusBar@ns_ROCX000001@@QAEHXZ)

namespace ns_ROCX000001 {
struct CXTPStatusBar
{
    int IsCustom();
    char pad[0x30];
    unsigned int m_nStyle;
};

int CXTPStatusBar::IsCustom()
{
    return m_nStyle >= 0x50050 ? 1 : 0;
}
}
