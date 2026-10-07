// roc 2010-06 00430a80  unit: COutputView  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00430a80
//
// 00430a80  b8d06fa000           mov eax, 0xa06fd0
// 00430a85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00430a80()
{
    return &G;
}
