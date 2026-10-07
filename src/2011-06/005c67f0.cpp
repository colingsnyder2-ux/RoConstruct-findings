// roc 2011-06 005c67f0  unit: RBX::KeyframeSequence::W4Priority::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c67f0
//
// 005c67f0  b824e3c300           mov eax, 0xc3e324
// 005c67f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c67f0()
{
    return &G;
}
