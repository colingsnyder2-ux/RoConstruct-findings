// roc 2011-06 008ec440  unit: CXTColorBase  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ec440
//
// 008ec440  b83099ad00           mov eax, 0xad9930
// 008ec445  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008ec440()
{
    return &G;
}
