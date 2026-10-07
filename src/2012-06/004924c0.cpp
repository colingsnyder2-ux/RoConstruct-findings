// roc 2012-06 004924c0  unit: CRobloxReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004924c0
//
// 004924c0  b8f0deb500           mov eax, 0xb5def0
// 004924c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004924c0()
{
    return &G;
}
