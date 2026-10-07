// roc 2012-06 0048f020  unit: CRobloxPlayerDlg  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0048f020
//
// 0048f020  b880d6b500           mov eax, 0xb5d680
// 0048f025  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0048f020()
{
    return &G;
}
