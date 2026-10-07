// roc 2009-06 007e2ee0  unit: IIPAVCRgn::?$CMap  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e2ee0
//
// 007e2ee0  b860829000           mov eax, 0x908260
// 007e2ee5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007e2ee0()
{
    return &G;
}
