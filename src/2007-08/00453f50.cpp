// roc 2007-08 00453f50  unit: CRobloxReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00453f50
//
// 00453f50  b860217900           mov eax, 0x792160
// 00453f55  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00453f50()
{
    return &G;
}
