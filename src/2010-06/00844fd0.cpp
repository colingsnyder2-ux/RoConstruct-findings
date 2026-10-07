// roc 2010-06 00844fd0  unit: CXTPDockBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00844fd0
//
// 00844fd0  b8007da600           mov eax, 0xa67d00
// 00844fd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00844fd0()
{
    return &G;
}
