// roc 2011-06 005c8020  unit: RBX::PartInstance::W4FormFactor::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c8020
//
// 005c8020  b8e0e9c300           mov eax, 0xc3e9e0
// 005c8025  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c8020()
{
    return &G;
}
