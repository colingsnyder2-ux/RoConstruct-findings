// roc 2010-06 008a2f00  unit: CXTPRibbonTabPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a2f00
//
// 008a2f00  b8981ea700           mov eax, 0xa71e98
// 008a2f05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a2f00()
{
    return &G;
}
