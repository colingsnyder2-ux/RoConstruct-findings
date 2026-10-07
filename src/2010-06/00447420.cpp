// roc 2010-06 00447420  unit: RBX::CRenderSettings::W4GraphicsMode::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00447420
//
// 00447420  b87813b800           mov eax, 0xb81378
// 00447425  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00447420()
{
    return &G;
}
