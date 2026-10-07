// roc 2011-06 00878d70  unit: CXTPPropertyGridItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00878d70
//
// 00878d70  b8e0dcac00           mov eax, 0xacdce0
// 00878d75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00878d70()
{
    return &G;
}
