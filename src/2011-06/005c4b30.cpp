// roc 2011-06 005c4b30  unit: RBX::Joint::W4JointType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c4b30
//
// 005c4b30  b838dcc300           mov eax, 0xc3dc38
// 005c4b35  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c4b30()
{
    return &G;
}
