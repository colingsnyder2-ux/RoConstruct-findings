// roc 2011-06 005c35b0  unit: RBX::TextService::W4FontSize::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c35b0
//
// 005c35b0  b8d8d6c300           mov eax, 0xc3d6d8
// 005c35b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c35b0()
{
    return &G;
}
