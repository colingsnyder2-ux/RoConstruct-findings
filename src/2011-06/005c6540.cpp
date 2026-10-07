// roc 2011-06 005c6540  unit: RBX::BasicPartInstance::W4LegacyPartType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c6540
//
// 005c6540  b854e2c300           mov eax, 0xc3e254
// 005c6545  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c6540()
{
    return &G;
}
