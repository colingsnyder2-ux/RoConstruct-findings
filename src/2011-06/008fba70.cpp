// roc 2011-06 008fba70  unit: CXTPRibbonGroupPopupToolBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fba70
//
// 008fba70  b8acb0c900           mov eax, 0xc9b0ac
// 008fba75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008fba70()
{
    return &G;
}
