// roc 2008-06 006c8fc0  unit: CXTPReportControl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c8fc0
//
// 006c8fc0  b884368500           mov eax, 0x853684
// 006c8fc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006c8fc0()
{
    return &G;
}
