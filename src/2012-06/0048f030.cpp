// roc 2012-06 0048f030  unit: CRobloxReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0048f030
//
// 0048f030  b82cd7b500           mov eax, 0xb5d72c
// 0048f035  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0048f030()
{
    return &G;
}
