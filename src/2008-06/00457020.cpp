// roc 2008-06 00457020  unit: CRobloxReportPaneView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00457020
//
// 00457020  b800888100           mov eax, 0x818800
// 00457025  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00457020()
{
    return &G;
}
