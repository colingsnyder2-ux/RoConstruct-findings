// roc 2007-08 0044a9c0  unit: CRobloxApp  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044a9c0
//
// 0044a9c0  b880087900           mov eax, 0x790880
// 0044a9c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0044a9c0()
{
    return &G;
}
