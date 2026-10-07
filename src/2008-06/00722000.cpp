// roc 2008-06 00722000  unit: CXTPRibbonBarControlQuickAccessPopup  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722000
//
// 00722000  b8288f9600           mov eax, 0x968f28
// 00722005  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00722000()
{
    return &G;
}
