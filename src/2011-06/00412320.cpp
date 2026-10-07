// roc 2011-06 00412320  unit: CIDEBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00412320
//
// 00412320  b8c8d0a500           mov eax, 0xa5d0c8
// 00412325  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00412320()
{
    return &G;
}
