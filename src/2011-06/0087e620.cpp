// roc 2011-06 0087e620  unit: CXTCaption  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087e620
//
// 0087e620  b87ceeac00           mov eax, 0xacee7c
// 0087e625  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0087e620()
{
    return &G;
}
