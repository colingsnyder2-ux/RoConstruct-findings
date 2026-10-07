// roc 2011-06 00440000  unit: CMemberTreeView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00440000
//
// 00440000  b81489a600           mov eax, 0xa68914
// 00440005  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00440000()
{
    return &G;
}
