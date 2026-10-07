// roc 2009-06 007e2ef0  unit: IIPAVCRgn::?$CMap  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e2ef0
//
// 007e2ef0  b8b0829000           mov eax, 0x9082b0
// 007e2ef5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_007e2ef0()
{
    return &G;
}
