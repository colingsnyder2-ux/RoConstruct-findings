// roc 2011-06 005c9400  unit: RBX::GameBasicSettings::W4ControlMode::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c9400
//
// 005c9400  b828efc300           mov eax, 0xc3ef28
// 005c9405  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c9400()
{
    return &G;
}
