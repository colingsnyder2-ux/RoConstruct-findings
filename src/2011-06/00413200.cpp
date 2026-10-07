// roc 2011-06 00413200  unit: CIDEBrowserView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00413200
//
// 00413200  b83cd7a500           mov eax, 0xa5d73c
// 00413205  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00413200()
{
    return &G;
}
