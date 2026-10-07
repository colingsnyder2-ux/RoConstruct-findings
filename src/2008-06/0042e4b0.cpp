// roc 2008-06 0042e4b0  unit: MyXTPCommandBars  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042e4b0
//
// 0042e4b0  b8c4078100           mov eax, 0x8107c4
// 0042e4b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042e4b0()
{
    return &G;
}
