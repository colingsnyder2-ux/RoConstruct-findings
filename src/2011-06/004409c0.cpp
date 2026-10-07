// roc 2011-06 004409c0  unit: CStandardOutputView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004409c0
//
// 004409c0  b8f489a600           mov eax, 0xa689f4
// 004409c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004409c0()
{
    return &G;
}
