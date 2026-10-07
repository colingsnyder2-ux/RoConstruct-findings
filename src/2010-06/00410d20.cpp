// roc 2010-06 00410d20  unit: CChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00410d20
//
// 00410d20  b89828a000           mov eax, 0xa02898
// 00410d25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00410d20()
{
    return &G;
}
