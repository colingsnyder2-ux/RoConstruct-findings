// roc 2008-06 00412f20  unit: CRbxChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00412f20
//
// 00412f20  b828e88000           mov eax, 0x80e828
// 00412f25  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00412f20()
{
    return &G;
}
