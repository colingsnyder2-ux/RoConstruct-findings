// roc 2008-06 006fbf70  unit: RBX::VTextureId::?$XItem  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fbf70
//
// 006fbf70  b808ac8500           mov eax, 0x85ac08
// 006fbf75  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_006fbf70()
{
    return &G;
}
