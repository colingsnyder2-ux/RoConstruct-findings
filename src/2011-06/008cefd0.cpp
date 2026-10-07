// roc 2011-06 008cefd0  unit: IIPAVCRgn::?$CMap  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008cefd0
//
// 008cefd0  b81874ad00           mov eax, 0xad7418
// 008cefd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_008cefd0()
{
    return &G;
}
