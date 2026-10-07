// roc 2011-06 005c8ea0  unit: RBX::GameSettings::W4VideoQuality::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c8ea0
//
// 005c8ea0  b894edc300           mov eax, 0xc3ed94
// 005c8ea5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c8ea0()
{
    return &G;
}
