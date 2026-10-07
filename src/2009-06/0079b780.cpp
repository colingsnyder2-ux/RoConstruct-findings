// roc 2009-06 0079b780  unit: CXTPResourceManager  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079b780
//
// 0079b780  b8e8139000           mov eax, 0x9013e8
// 0079b785  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0079b780()
{
    return &G;
}
