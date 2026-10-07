// roc 2008-06 00455d60  unit: CRobloxReportPaneView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00455d60
//
// 00455d60  b880838100           mov eax, 0x818380
// 00455d65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00455d60()
{
    return &G;
}
