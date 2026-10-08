// from server: 100% by colin
// roc 2007-08 00677750  unit: CXTPPopupBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00677750
//
// 00677750  8b8180010000         mov eax, dword ptr [ecx + 0x180]
// 00677756  85c0                 test eax, eax
// 00677758  7407                 je 0x677761
// 0067775a  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 00677760  c3                   ret 
// 00677761  33c0                 xor eax, eax
// 00677763  c3                   ret 

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
