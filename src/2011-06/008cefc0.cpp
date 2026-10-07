// roc 2011-06 008cefc0  unit: IIPAVCRgn::?$CMap  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008cefc0
//
// 008cefc0  b8c873ad00           mov eax, 0xad73c8
// 008cefc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008cefc0()
{
    return &G;
}
