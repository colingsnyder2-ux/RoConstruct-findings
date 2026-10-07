// roc 2009-06 0040cb90  unit: CBrowserDoc  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040cb90
//
// 0040cb90  b8bcdc8a00           mov eax, 0x8adcbc
// 0040cb95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040cb90()
{
    return &G;
}
