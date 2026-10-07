// roc 2011-06 005c8bf0  unit: RBX::CharacterMesh::W4BodyPart::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c8bf0
//
// 005c8bf0  b8d8ecc300           mov eax, 0xc3ecd8
// 005c8bf5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c8bf0()
{
    return &G;
}
