// roc 2008-06 00597410  unit: RBX::VTextureId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597410
//
// 00597410  b8789c9400           mov eax, 0x949c78
// 00597415  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00597410()
{
    return &G;
}
