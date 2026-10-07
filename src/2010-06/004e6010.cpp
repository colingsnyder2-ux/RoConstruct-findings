// roc 2010-06 004e6010  unit: RBX::VUDim2::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e6010
//
// 004e6010  b89823b900           mov eax, 0xb92398
// 004e6015  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004e6010()
{
    return &G;
}
