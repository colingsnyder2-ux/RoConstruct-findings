// roc 2007-08 0067f8c0  unit: CXTPPrintPageHeaderFooter  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f8c0
//
// 0067f8c0  b8a4ea7c00           mov eax, 0x7ceaa4
// 0067f8c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0067f8c0()
{
    return &G;
}
