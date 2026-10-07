// roc 2009-06 00454140  unit: CRobloxReportPaneView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00454140
//
// 00454140  b8d08f8b00           mov eax, 0x8b8fd0
// 00454145  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00454140()
{
    return &G;
}
