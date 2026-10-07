// roc 2011-06 0086be90  unit: CXTPStatusBarPane  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086be90
//
// 0086be90  b8b0bdac00           mov eax, 0xacbdb0
// 0086be95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0086be90()
{
    return &G;
}
