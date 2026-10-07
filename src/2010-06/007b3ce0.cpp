// roc 2010-06 007b3ce0  unit: CXTPEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b3ce0
//
// 007b3ce0  b86c5fa500           mov eax, 0xa55f6c
// 007b3ce5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007b3ce0()
{
    return &G;
}
