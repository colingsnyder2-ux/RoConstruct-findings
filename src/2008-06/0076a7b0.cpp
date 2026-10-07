// roc 2008-06 0076a7b0  unit: IIPAVCRgn::?$CMap  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076a7b0
//
// 0076a7b0  b878728600           mov eax, 0x867278
// 0076a7b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0076a7b0()
{
    return &G;
}
