// from server: 100% by colin
// roc 2007-08 00677430  unit: CXTPPopupBar  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00677430
//
// 00677430  83c8ff               or eax, 0xffffffff
// 00677433  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 00677439  8981cc000000         mov dword ptr [ecx + 0xcc], eax
// 0067743f  8b01                 mov eax, dword ptr [ecx]
// 00677441  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 00677447  ffe2                 jmp edx

struct CXTPPopupBar {
    char pad[0xc8];
    int m_nFieldC8;
    int m_nFieldCC;
    void SetSomething();
};

void CXTPPopupBar::SetSomething()
{
    m_nFieldC8 = -1;
    m_nFieldCC = -1;
    typedef void (CXTPPopupBar::*PMF)();
    PMF pmf = *(PMF*)(*(int*)this + 0x17c);
    (this->*pmf)();
}
