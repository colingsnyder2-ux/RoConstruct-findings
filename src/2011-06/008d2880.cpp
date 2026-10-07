// roc 2011-06 008d2880  unit: CXTPControlCustom  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d2880
//
// 008d2880  b8909ec900           mov eax, 0xc99e90
// 008d2885  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008d2880()
{
    return &G;
}
