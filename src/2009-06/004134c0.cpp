// roc 2009-06 004134c0  unit: CRbxChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004134c0
//
// 004134c0  b8ecf58a00           mov eax, 0x8af5ec
// 004134c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004134c0()
{
    return &G;
}
