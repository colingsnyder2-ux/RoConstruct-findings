// roc 2011-06 005c6aa0  unit: RBX::SocialService::W4StuffType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c6aa0
//
// 005c6aa0  b8e8e3c300           mov eax, 0xc3e3e8
// 005c6aa5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c6aa0()
{
    return &G;
}
