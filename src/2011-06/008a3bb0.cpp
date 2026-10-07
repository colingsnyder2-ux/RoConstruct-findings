// roc 2011-06 008a3bb0  unit: CXTPDockBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a3bb0
//
// 008a3bb0  b8f828ad00           mov eax, 0xad28f8
// 008a3bb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a3bb0()
{
    return &G;
}
