// roc 2011-06 008e5bf0  unit: CXTPPropertyGridInplaceList  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e5bf0
//
// 008e5bf0  b89489ad00           mov eax, 0xad8994
// 008e5bf5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008e5bf0()
{
    return &G;
}
