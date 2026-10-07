// roc 2008-06 00455d40  unit: CRobloxReportDocView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00455d40
//
// 00455d40  b864838100           mov eax, 0x818364
// 00455d45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00455d40()
{
    return &G;
}
