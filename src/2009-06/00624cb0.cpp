// roc 2009-06 00624cb0  unit: RBX::VTextureId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00624cb0
//
// 00624cb0  b898a6a000           mov eax, 0xa0a698
// 00624cb5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00624cb0()
{
    return &G;
}
