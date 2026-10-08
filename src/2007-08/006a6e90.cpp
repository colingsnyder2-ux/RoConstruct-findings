// roc 2007-08 006a6e90  unit: CXTPMenuBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a6e90
//
// 006a6e90  b8e4457d00           mov eax, 0x7d45e4
// 006a6e95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006a6e90()
{
    return &G;
}
