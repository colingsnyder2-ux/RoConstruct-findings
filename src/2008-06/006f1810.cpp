// roc 2008-06 006f1810  unit: CXTPRibbonBarMorePopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1810
//
// 006f1810  b8308d8500           mov eax, 0x858d30
// 006f1815  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006f1810()
{
    return &G;
}
