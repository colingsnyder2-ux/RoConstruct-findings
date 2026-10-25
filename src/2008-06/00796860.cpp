// from server: 100% by auto
// roc 2008-06 00796860  unit: CXTPRibbonTabPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00796860
//
// 00796860  b830b98600           mov eax, 0x86b930
// 00796865  c3                   ret 

extern char G;

char* func_00796860()
{
    return &G;
}
