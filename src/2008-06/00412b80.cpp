// roc 2008-06 00412b80  unit: CRbxChildFrame  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00412b80
//
// 00412b80  b884e48000           mov eax, 0x80e484
// 00412b85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00412b80()
{
    return &G;
}
