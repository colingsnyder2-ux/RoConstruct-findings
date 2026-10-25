// from server: 100% by auto
// roc 2008-06 00455d50  unit: CRobloxReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00455d50
//
// 00455d50  b848838100           mov eax, 0x818348
// 00455d55  c3                   ret 

extern char G;

char* func_00455d50()
{
    return &G;
}
