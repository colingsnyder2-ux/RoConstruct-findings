// roc 2010-06 004e6e90  unit: RBX::VSystemAddress::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e6e90
//
// 004e6e90  b85020b900           mov eax, 0xb92050
// 004e6e95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004e6e90()
{
    return &G;
}
