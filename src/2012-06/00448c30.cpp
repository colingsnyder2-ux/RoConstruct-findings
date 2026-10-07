// roc 2012-06 00448c30  unit: CMultiPlayerPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00448c30
//
// 00448c30  b8401cb500           mov eax, 0xb51c40
// 00448c35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00448c30()
{
    return &G;
}
