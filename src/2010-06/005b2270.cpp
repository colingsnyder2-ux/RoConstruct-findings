// roc 2010-06 005b2270  unit: RBX::PartInstance::W4FormFactor::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b2270
//
// 005b2270  b8f81aba00           mov eax, 0xba1af8
// 005b2275  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005b2270()
{
    return &G;
}
