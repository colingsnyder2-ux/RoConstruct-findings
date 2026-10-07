// roc 2010-06 007d04e0  unit: CXTPReportControl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d04e0
//
// 007d04e0  b8688ea500           mov eax, 0xa58e68
// 007d04e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007d04e0()
{
    return &G;
}
