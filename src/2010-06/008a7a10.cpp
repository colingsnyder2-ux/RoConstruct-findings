// roc 2010-06 008a7a10  unit: CXTWindowMap  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a7a10
//
// 008a7a10  b8fc3ca700           mov eax, 0xa73cfc
// 008a7a15  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a7a10()
{
    return &G;
}
