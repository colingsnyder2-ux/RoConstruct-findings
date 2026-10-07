// roc 2010-06 00846ba0  unit: CXTPDockBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00846ba0
//
// 00846ba0  b8cc7fa600           mov eax, 0xa67fcc
// 00846ba5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00846ba0()
{
    return &G;
}
