// roc 2010-06 00428300  unit: MyXTPCommandBars  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00428300
//
// 00428300  b88c47a000           mov eax, 0xa0478c
// 00428305  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00428300()
{
    return &G;
}
