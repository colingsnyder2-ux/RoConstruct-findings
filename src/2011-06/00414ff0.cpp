// roc 2011-06 00414ff0  unit: CRbxChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00414ff0
//
// 00414ff0  b870e3a500           mov eax, 0xa5e370
// 00414ff5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00414ff0()
{
    return &G;
}
