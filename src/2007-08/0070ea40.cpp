// roc 2007-08 0070ea40  unit: CXTColorBase  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070ea40
//
// 0070ea40  b858e17d00           mov eax, 0x7de158
// 0070ea45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0070ea40()
{
    return &G;
}
