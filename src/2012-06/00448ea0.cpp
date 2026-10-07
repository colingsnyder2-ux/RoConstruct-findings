// roc 2012-06 00448ea0  unit: CMultiPlayerPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00448ea0
//
// 00448ea0  b8a81db500           mov eax, 0xb51da8
// 00448ea5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00448ea0()
{
    return &G;
}
