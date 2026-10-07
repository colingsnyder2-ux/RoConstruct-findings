// roc 2010-06 005ad750  unit: RBX::HopperBin::W4BinType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ad750
//
// 005ad750  b86c09ba00           mov eax, 0xba096c
// 005ad755  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005ad750()
{
    return &G;
}
