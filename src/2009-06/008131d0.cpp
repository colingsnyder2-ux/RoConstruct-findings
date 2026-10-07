// roc 2009-06 008131d0  unit: CXTPRibbonGroupPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008131d0
//
// 008131d0  b838aaa200           mov eax, 0xa2aa38
// 008131d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008131d0()
{
    return &G;
}
