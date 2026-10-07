// roc 2011-06 0062d990  unit: RBX::VTextureId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0062d990
//
// 0062d990  b8c0dec400           mov eax, 0xc4dec0
// 0062d995  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0062d990()
{
    return &G;
}
