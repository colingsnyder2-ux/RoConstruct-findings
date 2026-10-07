// roc 2011-06 0080c6d0  unit: CXTPControl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080c6d0
//
// 0080c6d0  b86058c900           mov eax, 0xc95860
// 0080c6d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0080c6d0()
{
    return &G;
}
