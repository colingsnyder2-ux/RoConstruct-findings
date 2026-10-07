// roc 2010-06 00401620  unit: CAboutRobloxDialog  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00401620
//
// 00401620  b81400a000           mov eax, 0xa00014
// 00401625  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00401620()
{
    return &G;
}
