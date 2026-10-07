// roc 2010-06 004e62c0  unit: RBX::VContentId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e62c0
//
// 004e62c0  b89cc2b700           mov eax, 0xb7c29c
// 004e62c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004e62c0()
{
    return &G;
}
