// roc 2010-06 0040e140  unit: CIDEBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040e140
//
// 0040e140  b8ac1ba000           mov eax, 0xa01bac
// 0040e145  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040e140()
{
    return &G;
}
