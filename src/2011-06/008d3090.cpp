// roc 2011-06 008d3090  unit: CXTPTabManagerItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3090
//
// 008d3090  b8c878ad00           mov eax, 0xad78c8
// 008d3095  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008d3090()
{
    return &G;
}
