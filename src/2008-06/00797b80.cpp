// from server: 100% by auto
// roc 2008-06 00797b80  unit: CXTPRibbonGroupPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797b80
//
// 00797b80  b818c38600           mov eax, 0x86c318
// 00797b85  c3                   ret 

extern char G;

char* func_00797b80()
{
    return &G;
}
