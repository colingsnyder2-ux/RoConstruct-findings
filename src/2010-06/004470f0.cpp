// roc 2010-06 004470f0  unit: RBX::CRenderSettings::W4AASamples::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004470f0
//
// 004470f0  b8b012b800           mov eax, 0xb812b0
// 004470f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004470f0()
{
    return &G;
}
