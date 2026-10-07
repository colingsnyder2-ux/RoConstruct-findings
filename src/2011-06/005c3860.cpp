// roc 2011-06 005c3860  unit: RBX::TextService::W4Font::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c3860
//
// 005c3860  b884d7c300           mov eax, 0xc3d784
// 005c3865  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c3860()
{
    return &G;
}
