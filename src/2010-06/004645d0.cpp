// roc 2010-06 004645d0  unit: CRobloxReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004645d0
//
// 004645d0  b828eaa000           mov eax, 0xa0ea28
// 004645d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004645d0()
{
    return &G;
}
