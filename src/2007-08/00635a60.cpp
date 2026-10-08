// roc 2007-08 00635a60  unit: CXTPEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635a60
//
// 00635a60  b8a8547c00           mov eax, 0x7c54a8
// 00635a65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00635a60()
{
    return &G;
}
