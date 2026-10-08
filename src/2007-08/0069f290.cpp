// roc 2007-08 0069f290  unit: CXTCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069f290
//
// 0069f290  b8b42c7d00           mov eax, 0x7d2cb4
// 0069f295  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0069f290()
{
    return &G;
}
