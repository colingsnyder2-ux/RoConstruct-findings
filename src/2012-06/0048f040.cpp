// roc 2012-06 0048f040  unit: CRobloxReportDocView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0048f040
//
// 0048f040  b848d7b500           mov eax, 0xb5d748
// 0048f045  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0048f040()
{
    return &G;
}
