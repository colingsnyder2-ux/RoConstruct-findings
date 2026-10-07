// roc 2010-06 00411180  unit: CChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00411180
//
// 00411180  b8142ba000           mov eax, 0xa02b14
// 00411185  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00411180()
{
    return &G;
}
