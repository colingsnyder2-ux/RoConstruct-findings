// roc 2011-06 008a5e80  unit: CXTPRibbonBarControlQuickAccessPopup  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a5e80
//
// 008a5e80  b8608ec900           mov eax, 0xc98e60
// 008a5e85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a5e80()
{
    return &G;
}
