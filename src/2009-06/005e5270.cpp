// roc 2009-06 005e5270  unit: RBX::VContentId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e5270
//
// 005e5270  b84cf39d00           mov eax, 0x9df34c
// 005e5275  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005e5270()
{
    return &G;
}
