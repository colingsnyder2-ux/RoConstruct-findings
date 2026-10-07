// roc 2012-06 004a5020  unit: CRobloxScriptReviewPaneView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a5020
//
// 004a5020  b8a018b600           mov eax, 0xb618a0
// 004a5025  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a5020()
{
    return &G;
}
