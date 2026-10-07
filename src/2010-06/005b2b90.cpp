// roc 2010-06 005b2b90  unit: RBX::CharacterMesh::W4BodyPart::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b2b90
//
// 005b2b90  b8501dba00           mov eax, 0xba1d50
// 005b2b95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005b2b90()
{
    return &G;
}
