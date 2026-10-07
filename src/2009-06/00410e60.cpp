// roc 2009-06 00410e60  unit: CRbxChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00410e60
//
// 00410e60  b854f08a00           mov eax, 0x8af054
// 00410e65  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00410e60()
{
    return &G;
}
