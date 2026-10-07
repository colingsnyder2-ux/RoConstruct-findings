// roc 2012-06 004a3340  unit: CRobloxScriptReviewPaneView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a3340
//
// 004a3340  b82011b600           mov eax, 0xb61120
// 004a3345  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a3340()
{
    return &G;
}
