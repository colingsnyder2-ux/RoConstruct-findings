// roc 2009-06 008131b0  unit: CXTPRibbonTabPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008131b0
//
// 008131b0  b838ce9000           mov eax, 0x90ce38
// 008131b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008131b0()
{
    return &G;
}
