// roc 2011-06 0089b5a0  unit: CXTPControlEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089b5a0
//
// 0089b5a0  b83889c900           mov eax, 0xc98938
// 0089b5a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0089b5a0()
{
    return &G;
}
