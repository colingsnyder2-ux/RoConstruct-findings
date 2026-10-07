// roc 2009-06 00729350  unit: CXTPCommandBars  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00729350
//
// 00729350  b8e8258f00           mov eax, 0x8f25e8
// 00729355  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00729350()
{
    return &G;
}
