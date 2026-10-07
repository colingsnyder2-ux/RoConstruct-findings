// roc 2010-06 004e5fd0  unit: RBX::VUDim::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e5fd0
//
// 004e5fd0  b85023b900           mov eax, 0xb92350
// 004e5fd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004e5fd0()
{
    return &G;
}
