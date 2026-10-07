// roc 2008-06 006c4cc0  unit: CXTPReportView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4cc0
//
// 006c4cc0  b81c2c8500           mov eax, 0x852c1c
// 006c4cc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006c4cc0()
{
    return &G;
}
