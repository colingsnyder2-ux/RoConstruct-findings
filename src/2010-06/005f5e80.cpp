// roc 2010-06 005f5e80  unit: RBX::VTextureId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f5e80
//
// 005f5e80  b8b4c5ba00           mov eax, 0xbac5b4
// 005f5e85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005f5e80()
{
    return &G;
}
