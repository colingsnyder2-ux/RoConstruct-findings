// roc 2008-06 00719d00  unit: CXTCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00719d00
//
// 00719d00  b818f18500           mov eax, 0x85f118
// 00719d05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00719d00()
{
    return &G;
}
