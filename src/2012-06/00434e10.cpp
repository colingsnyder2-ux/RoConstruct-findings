// roc 2012-06 00434e10  unit: MyXTPCommandBars  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00434e10
//
// 00434e10  b83cf7b400           mov eax, 0xb4f73c
// 00434e15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00434e10()
{
    return &G;
}
