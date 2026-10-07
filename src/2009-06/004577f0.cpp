// roc 2009-06 004577f0  unit: CRobloxReportPaneView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004577f0
//
// 004577f0  b898968b00           mov eax, 0x8b9698
// 004577f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004577f0()
{
    return &G;
}
