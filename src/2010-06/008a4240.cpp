// roc 2010-06 008a4240  unit: CXTPRibbonGroupPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a4240
//
// 008a4240  b88028a700           mov eax, 0xa72880
// 008a4245  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a4240()
{
    return &G;
}
