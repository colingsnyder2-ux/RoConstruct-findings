// roc 2011-06 00878bc0  unit: CXTPPropertyGridToolTip  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00878bc0
//
// 00878bc0  b858daac00           mov eax, 0xacda58
// 00878bc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00878bc0()
{
    return &G;
}
