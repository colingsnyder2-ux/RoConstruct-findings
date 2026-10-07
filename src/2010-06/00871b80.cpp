// roc 2010-06 00871b80  unit: IIPAVCRgn::?$CMap  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00871b80
//
// 00871b80  b808caa600           mov eax, 0xa6ca08
// 00871b85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00871b80()
{
    return &G;
}
