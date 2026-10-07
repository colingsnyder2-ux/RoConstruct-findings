// roc 2009-06 00454130  unit: CRobloxReportDocView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00454130
//
// 00454130  b8b48f8b00           mov eax, 0x8b8fb4
// 00454135  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00454130()
{
    return &G;
}
