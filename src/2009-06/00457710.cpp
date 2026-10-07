// roc 2009-06 00457710  unit: CRobloxReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00457710
//
// 00457710  b830968b00           mov eax, 0x8b9630
// 00457715  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00457710()
{
    return &G;
}
