// roc 2007-08 006a29c0  unit: CXTPDockBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a29c0
//
// 006a29c0  b830347d00           mov eax, 0x7d3430
// 006a29c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006a29c0()
{
    return &G;
}
