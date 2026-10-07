// roc 2010-06 00410db0  unit: CRbxChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00410db0
//
// 00410db0  b8b428a000           mov eax, 0xa028b4
// 00410db5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00410db0()
{
    return &G;
}
