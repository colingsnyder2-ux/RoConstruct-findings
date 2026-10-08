// roc 2007-08 00631bf0  unit: CXTPCommandBars  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631bf0
//
// 00631bf0  b8d44e7c00           mov eax, 0x7c4ed4
// 00631bf5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00631bf0()
{
    return &G;
}
