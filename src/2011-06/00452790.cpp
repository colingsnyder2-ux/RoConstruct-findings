// roc 2011-06 00452790  unit: RBX::CRenderSettings::W4GraphicsMode::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00452790
//
// 00452790  b8f01dc100           mov eax, 0xc11df0
// 00452795  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00452790()
{
    return &G;
}
