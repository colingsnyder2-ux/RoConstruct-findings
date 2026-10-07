// roc 2010-06 00846a00  unit: CXTPDockBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00846a00
//
// 00846a00  b8d87ea600           mov eax, 0xa67ed8
// 00846a05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00846a00()
{
    return &G;
}
