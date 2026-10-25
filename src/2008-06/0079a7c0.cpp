// from server: 100% by auto
// roc 2008-06 0079a7c0  unit: CXTPRibbonControlSystemPopupBarListCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079a7c0
//
// 0079a7c0  b8acb99600           mov eax, 0x96b9ac
// 0079a7c5  c3                   ret 

extern char G;

char* func_0079a7c0()
{
    return &G;
}
