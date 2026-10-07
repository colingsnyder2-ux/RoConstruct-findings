// roc 2010-06 00461050  unit: CRobloxReportDocView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00461050
//
// 00461050  b884e3a000           mov eax, 0xa0e384
// 00461055  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00461050()
{
    return &G;
}
