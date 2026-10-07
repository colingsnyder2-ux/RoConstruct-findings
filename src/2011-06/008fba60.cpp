// roc 2011-06 008fba60  unit: CXTPRibbonTabPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fba60
//
// 008fba60  b8c8b9ad00           mov eax, 0xadb9c8
// 008fba65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008fba60()
{
    return &G;
}
