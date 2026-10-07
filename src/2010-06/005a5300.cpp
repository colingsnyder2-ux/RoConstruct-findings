// roc 2010-06 005a5300  unit: RBX::W4NormalId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a5300
//
// 005a5300  b8f4feb900           mov eax, 0xb9fef4
// 005a5305  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005a5300()
{
    return &G;
}
