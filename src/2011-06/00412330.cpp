// roc 2011-06 00412330  unit: CPlayBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00412330
//
// 00412330  b8e4d0a500           mov eax, 0xa5d0e4
// 00412335  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00412330()
{
    return &G;
}
