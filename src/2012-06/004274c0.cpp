// roc 2012-06 004274c0  unit: CInsertObjectDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004274c0
//
// 004274c0  b8d4dab400           mov eax, 0xb4dad4
// 004274c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004274c0()
{
    return &G;
}
