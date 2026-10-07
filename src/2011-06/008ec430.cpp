// roc 2011-06 008ec430  unit: CXTColorBase  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ec430
//
// 008ec430  b8b098ad00           mov eax, 0xad98b0
// 008ec435  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008ec430()
{
    return &G;
}
