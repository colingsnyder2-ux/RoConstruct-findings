// roc 2012-06 004297c0  unit: CInstanceExplorer  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004297c0
//
// 004297c0  b854e8b400           mov eax, 0xb4e854
// 004297c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004297c0()
{
    return &G;
}
