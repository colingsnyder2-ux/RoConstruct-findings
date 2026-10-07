// roc 2008-06 00717500  unit: CXTPPropertyGridItemBool  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717500
//
// 00717500  b8f0e28500           mov eax, 0x85e2f0
// 00717505  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00717500()
{
    return &G;
}
