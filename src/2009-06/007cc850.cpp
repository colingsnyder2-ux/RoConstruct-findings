// roc 2009-06 007cc850  unit: CXTPReportHeaderDropWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cc850
//
// 007cc850  b8d45d9000           mov eax, 0x905dd4
// 007cc855  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007cc850()
{
    return &G;
}
