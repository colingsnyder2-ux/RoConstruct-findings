// roc 2008-06 0058b1b0  unit: RBX::Reflection::UTuple::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058b1b0
//
// 0058b1b0  b840639400           mov eax, 0x946340
// 0058b1b5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0058b1b0()
{
    return &G;
}
