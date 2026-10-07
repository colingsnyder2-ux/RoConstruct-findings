// roc 2011-06 008fb720  unit: CXTPRibbonBarMorePopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fb720
//
// 008fb720  b8acb9ad00           mov eax, 0xadb9ac
// 008fb725  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008fb720()
{
    return &G;
}
