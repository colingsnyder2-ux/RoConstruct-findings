// roc 2009-06 00430fa0  unit: CStandardOutputView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00430fa0
//
// 00430fa0  b8743a8b00           mov eax, 0x8b3a74
// 00430fa5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00430fa0()
{
    return &G;
}
