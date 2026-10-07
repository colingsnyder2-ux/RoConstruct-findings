// roc 2009-06 0071ad00  unit: CXTPEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071ad00
//
// 0071ad00  b8f8128f00           mov eax, 0x8f12f8
// 0071ad05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0071ad00()
{
    return &G;
}
