// roc 2011-06 00840920  unit: CInstanceRecord  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00840920
//
// 00840920  b8346ac900           mov eax, 0xc96a34
// 00840925  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00840920()
{
    return &G;
}
