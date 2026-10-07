// roc 2011-06 004409b0  unit: COutputView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004409b0
//
// 004409b0  b8d889a600           mov eax, 0xa689d8
// 004409b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004409b0()
{
    return &G;
}
