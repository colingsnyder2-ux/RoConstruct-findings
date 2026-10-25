// from server: 100% by auto
// roc 2008-06 00796870  unit: CXTPRibbonGroupPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00796870
//
// 00796870  b82cb79600           mov eax, 0x96b72c
// 00796875  c3                   ret 

extern char G;

char* func_00796870()
{
    return &G;
}
