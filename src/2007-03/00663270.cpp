// from server: 100% by tester
// roc 2007-03 00663270  unit: seg_00660000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00663270
//
// 00663270  83c8ff               or eax, 0xffffffff
// 00663273  8981c4000000         mov dword ptr [ecx + 0xc4], eax
// 00663279  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 0066327f  8b01                 mov eax, dword ptr [ecx]
// 00663281  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 00663287  ffe2                 jmp edx

struct CXTPPopupBar {
    char pad[0xc4];
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
