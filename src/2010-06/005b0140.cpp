// roc 2010-06 005b0140  unit: RBX::Humanoid::W4Status::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b0140
//
// 005b0140  b8e812ba00           mov eax, 0xba12e8
// 005b0145  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005b0140()
{
    return &G;
}
