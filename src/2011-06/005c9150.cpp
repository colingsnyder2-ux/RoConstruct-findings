// roc 2011-06 005c9150  unit: RBX::GameSettings::W4UploadSetting::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c9150
//
// 005c9150  b85ceec300           mov eax, 0xc3ee5c
// 005c9155  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c9150()
{
    return &G;
}
