// roc 2011-06 005c45d0  unit: RBX::Feature::W4LeftRight::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c45d0
//
// 005c45d0  b8ecdac300           mov eax, 0xc3daec
// 005c45d5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c45d0()
{
    return &G;
}
