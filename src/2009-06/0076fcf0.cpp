// roc 2009-06 0076fcf0  unit: CXTPPrintPageHeaderFooter  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076fcf0
//
// 0076fcf0  b8a4b48f00           mov eax, 0x8fb4a4
// 0076fcf5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0076fcf0()
{
    return &G;
}
