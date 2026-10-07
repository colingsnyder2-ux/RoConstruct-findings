// roc 2010-06 0040cd00  unit: CIDEBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040cd00
//
// 0040cd00  b8c414a000           mov eax, 0xa014c4
// 0040cd05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040cd00()
{
    return &G;
}
