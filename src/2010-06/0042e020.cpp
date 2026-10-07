// roc 2010-06 0042e020  unit: CObjectBrowser  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042e020
//
// 0042e020  b8a065a000           mov eax, 0xa065a0
// 0042e025  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042e020()
{
    return &G;
}
