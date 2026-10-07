// roc 2011-06 008e5530  unit: CXTPPropertyGridInplaceList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e5530
//
// 008e5530  b80488ad00           mov eax, 0xad8804
// 008e5535  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008e5530()
{
    return &G;
}
