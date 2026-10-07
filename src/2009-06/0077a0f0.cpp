// roc 2009-06 0077a0f0  unit: CXTPTabClientWnd  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077a0f0
//
// 0077a0f0  b8f8c18f00           mov eax, 0x8fc1f8
// 0077a0f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0077a0f0()
{
    return &G;
}
