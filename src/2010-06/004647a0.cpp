// roc 2010-06 004647a0  unit: CRobloxView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004647a0
//
// 004647a0  b830eea000           mov eax, 0xa0ee30
// 004647a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004647a0()
{
    return &G;
}
