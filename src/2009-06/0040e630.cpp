// roc 2009-06 0040e630  unit: CIDEBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040e630
//
// 0040e630  b86ce38a00           mov eax, 0x8ae36c
// 0040e635  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040e630()
{
    return &G;
}
