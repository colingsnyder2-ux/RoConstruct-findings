// roc 2007-08 006334c0  unit: CXTPCommandBars  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006334c0
//
// 006334c0  b85c527c00           mov eax, 0x7c525c
// 006334c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006334c0()
{
    return &G;
}
