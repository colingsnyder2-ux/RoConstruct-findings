// roc 2007-08 006d2630  unit: CXTPReportInplaceList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2630
//
// 006d2630  b8607f7d00           mov eax, 0x7d7f60
// 006d2635  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006d2630()
{
    return &G;
}
