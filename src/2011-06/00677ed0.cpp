// roc 2011-06 00677ed0  unit: RBX::VAnimationId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00677ed0
//
// 00677ed0  b8bca6c500           mov eax, 0xc5a6bc
// 00677ed5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00677ed0()
{
    return &G;
}
