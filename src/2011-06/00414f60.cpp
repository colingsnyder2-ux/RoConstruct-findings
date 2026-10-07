// roc 2011-06 00414f60  unit: CChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00414f60
//
// 00414f60  b854e3a500           mov eax, 0xa5e354
// 00414f65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00414f60()
{
    return &G;
}
