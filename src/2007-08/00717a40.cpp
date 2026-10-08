// from server: 100% by colin
// roc 2007-08 00717a40  unit: CXTPRibbonTabPopupToolBar  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00717a40
//
// 00717a40  8b815c020000         mov eax, dword ptr [ecx + 0x25c]
// 00717a46  50                   push eax
// 00717a47  81c148020000         add ecx, 0x248
// 00717a4d  e89e38f9ff           call 0x6ab2f0
// 00717a52  c3                   ret 

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
