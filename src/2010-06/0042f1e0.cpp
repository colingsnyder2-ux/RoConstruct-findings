// roc 2010-06 0042f1e0  unit: CObjectBrowser  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0042f1e0
//
// 0042f1e0  b8f46ba000           mov eax, 0xa06bf4
// 0042f1e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0042f1e0()
{
    return &G;
}
