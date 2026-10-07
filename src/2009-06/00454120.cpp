// roc 2009-06 00454120  unit: CRobloxReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00454120
//
// 00454120  b8988f8b00           mov eax, 0x8b8f98
// 00454125  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00454120()
{
    return &G;
}
