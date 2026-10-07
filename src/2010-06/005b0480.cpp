// roc 2010-06 005b0480  unit: RBX::BasicPartInstance::W4LegacyPartType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b0480
//
// 005b0480  b89c13ba00           mov eax, 0xba139c
// 005b0485  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005b0480()
{
    return &G;
}
