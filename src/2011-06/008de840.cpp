// roc 2011-06 008de840  unit: CXTPPropertyGridInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de840
//
// 008de840  b8607fad00           mov eax, 0xad7f60
// 008de845  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008de840()
{
    return &G;
}
