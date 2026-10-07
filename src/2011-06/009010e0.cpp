// roc 2011-06 009010e0  unit: CXTWindowMap  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009010e0
//
// 009010e0  b854e1ad00           mov eax, 0xade154
// 009010e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_009010e0()
{
    return &G;
}
