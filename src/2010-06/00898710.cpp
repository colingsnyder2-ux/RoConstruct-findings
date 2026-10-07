// roc 2010-06 00898710  unit: CXTShadowHook  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00898710
//
// 00898710  b88805a700           mov eax, 0xa70588
// 00898715  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00898710()
{
    return &G;
}
