// roc 2008-06 0040df70  unit: CIDEBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040df70
//
// 0040df70  b874cf8000           mov eax, 0x80cf74
// 0040df75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0040df70()
{
    return &G;
}
