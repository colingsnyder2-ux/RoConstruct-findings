// roc 2011-06 008a21a0  unit: CXTPDockBar  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a21a0
//
// 008a21a0  b82027ad00           mov eax, 0xad2720
// 008a21a5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008a21a0()
{
    return &G;
}
