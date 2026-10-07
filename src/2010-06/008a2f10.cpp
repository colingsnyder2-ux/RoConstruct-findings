// roc 2010-06 008a2f10  unit: CXTPRibbonGroupPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a2f10
//
// 008a2f10  b88cbbbe00           mov eax, 0xbebb8c
// 008a2f15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a2f10()
{
    return &G;
}
