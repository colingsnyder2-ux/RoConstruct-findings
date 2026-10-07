// roc 2012-06 00427750  unit: CInsertObjectDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00427750
//
// 00427750  b83cdcb400           mov eax, 0xb4dc3c
// 00427755  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00427750()
{
    return &G;
}
