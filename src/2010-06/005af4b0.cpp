// roc 2010-06 005af4b0  unit: RBX::Joint::W4JointType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005af4b0
//
// 005af4b0  b84810ba00           mov eax, 0xba1048
// 005af4b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005af4b0()
{
    return &G;
}
