// roc 2007-08 0069a260  unit: CPropertyGridItemBrickColor  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069a260
//
// 0069a260  b8c4187d00           mov eax, 0x7d18c4
// 0069a265  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0069a260()
{
    return &G;
}
