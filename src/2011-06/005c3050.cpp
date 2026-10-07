// roc 2011-06 005c3050  unit: RBX::TextService::W4XAlignment::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c3050
//
// 005c3050  b868d5c300           mov eax, 0xc3d568
// 005c3055  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c3050()
{
    return &G;
}
