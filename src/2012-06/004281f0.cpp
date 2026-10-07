// roc 2012-06 004281f0  unit: CInstanceExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004281f0
//
// 004281f0  b8fcddb400           mov eax, 0xb4ddfc
// 004281f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004281f0()
{
    return &G;
}
