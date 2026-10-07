// roc 2010-06 004e6100  unit: RBX::VAxes::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e6100
//
// 004e6100  b85424b900           mov eax, 0xb92454
// 004e6105  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004e6100()
{
    return &G;
}
