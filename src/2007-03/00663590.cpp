// roc 2007-03 00663590  unit: seg_00660000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00663590
//
// 00663590  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 00663596  85c0                 test eax, eax
// 00663598  7407                 je 0x6635a1
// 0066359a  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 006635a0  c3                   ret 
// 006635a1  33c0                 xor eax, eax
// 006635a3  c3                   ret 
// copied from an identical function in another client (function ?GetValue@CXTPPopupBar@ns_ROCX00000f@@QAEHXZ)

namespace ns_ROCX00000f {
struct CXTPPopupBarInner {
    char pad[0xfc];
    int m_value;
};

struct CXTPPopupBar {
    char pad[0x180];
    CXTPPopupBarInner* m_ptr;
    int GetValue();
};

int CXTPPopupBar::GetValue()
{
    CXTPPopupBarInner* p = m_ptr;
    if (p)
        return p->m_value;
    return 0;
}
}
