// from server: 100% by colin
// roc 2007-08 00710fb0  unit: CXTColorSelectorCtrl  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00710fb0
//
// 00710fb0  8b01                 mov eax, dword ptr [ecx]
// 00710fb2  8b542404             mov edx, dword ptr [esp + 4]
// 00710fb6  8b8040010000         mov eax, dword ptr [eax + 0x140]
// 00710fbc  6a00                 push 0
// 00710fbe  52                   push edx
// 00710fbf  ffd0                 call eax
// 00710fc1  c20400               ret 4

struct CXTColorSelectorCtrl {
    void SetCurSel(int n);
};

void CXTColorSelectorCtrl::SetCurSel(int n) {
    typedef void (CXTColorSelectorCtrl::*PMF)(int, int);
    PMF* vtbl = *(PMF**)this;
    (this->**(PMF*)((char*)vtbl + 0x140))(n, 0);
}
