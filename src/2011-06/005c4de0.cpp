// roc 2011-06 005c4de0  unit: RBX::W4KeywordFilterType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c4de0
//
// 005c4de0  b8dcdcc300           mov eax, 0xc3dcdc
// 005c4de5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c4de0()
{
    return &G;
}
