// roc 2007-03 00702340  unit: seg_00700000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00702340
//
// 00702340  8b01                 mov eax, dword ptr [ecx]
// 00702342  8b542404             mov edx, dword ptr [esp + 4]
// 00702346  8b8040010000         mov eax, dword ptr [eax + 0x140]
// 0070234c  6a00                 push 0
// 0070234e  52                   push edx
// 0070234f  ffd0                 call eax
// 00702351  c20400               ret 4
// copied from an identical function in another client (function ?SetCurSel@CXTColorSelectorCtrl@ns_ROCX0000df@@QAEXH@Z)

namespace ns_ROCX0000df {
struct CXTColorSelectorCtrl {
    void SetCurSel(int n);
};

void CXTColorSelectorCtrl::SetCurSel(int n) {
    typedef void (CXTColorSelectorCtrl::*PMF)(int, int);
    PMF* vtbl = *(PMF**)this;
    (this->**(PMF*)((char*)vtbl + 0x140))(n, 0);
}
}
