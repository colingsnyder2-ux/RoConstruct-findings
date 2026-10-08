// roc 2007-08 00453520  unit: CRobloxReportDocView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00453520
//
// 00453520  b8bc1d7900           mov eax, 0x791dbc
// 00453525  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00453520()
{
    return &G;
}
