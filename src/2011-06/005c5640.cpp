// roc 2011-06 005c5640  unit: RBX::Humanoid::W4Status::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c5640
//
// 005c5640  b8d8dec300           mov eax, 0xc3ded8
// 005c5645  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c5640()
{
    return &G;
}
