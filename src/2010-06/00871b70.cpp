// roc 2010-06 00871b70  unit: IIPAVCRgn::?$CMap  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00871b70
//
// 00871b70  b8b8c9a600           mov eax, 0xa6c9b8
// 00871b75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00871b70()
{
    return &G;
}
