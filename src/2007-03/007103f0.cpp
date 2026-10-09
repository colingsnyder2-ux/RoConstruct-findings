// roc 2007-03 007103f0  unit: seg_00710000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007103f0
//
// 007103f0  8b815c020000         mov eax, dword ptr [ecx + 0x25c]
// 007103f6  50                   push eax
// 007103f7  81c148020000         add ecx, 0x248
// 007103fd  e8bed0f8ff           call 0x69d4c0
// 00710402  c3                   ret 
// copied from an identical function in another client (function ?Method@CXTPRibbonTabPopupToolBar@ns_ROCX000000@@QAEHXZ)

namespace ns_ROCX000000 {
struct Inner
{
    int Method(int);
};

struct CXTPRibbonTabPopupToolBar
{
    char pad_0000[0x248];
    Inner inner;
    char pad_024c[0x25c - 0x24c];
    int field_025c;
    int Method();
};

int CXTPRibbonTabPopupToolBar::Method()
{
    return inner.Method(field_025c);
}
}
