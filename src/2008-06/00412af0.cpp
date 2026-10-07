// roc 2008-06 00412af0  unit: CChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00412af0
//
// 00412af0  b868e48000           mov eax, 0x80e468
// 00412af5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00412af0()
{
    return &G;
}
