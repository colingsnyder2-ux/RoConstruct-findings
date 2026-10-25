// from server: 100% by auto
// roc 2008-06 007964d0  unit: CXTPRibbonBarMorePopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007964d0
//
// 007964d0  b814b98600           mov eax, 0x86b914
// 007964d5  c3                   ret 

extern char G;

char* func_007964d0()
{
    return &G;
}
