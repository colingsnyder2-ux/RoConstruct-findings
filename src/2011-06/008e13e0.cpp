// roc 2011-06 008e13e0  unit: CXTPPropertyGridInplaceEdit  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e13e0
//
// 008e13e0  b87482ad00           mov eax, 0xad8274
// 008e13e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008e13e0()
{
    return &G;
}
