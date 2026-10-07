// roc 2009-06 00419a60  unit: CInsertObjectDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00419a60
//
// 00419a60  b810fb8a00           mov eax, 0x8afb10
// 00419a65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00419a60()
{
    return &G;
}
