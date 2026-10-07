// roc 2010-06 005b1c90  unit: RBX::SpecialShape::W4MeshType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b1c90
//
// 005b1c90  b8b019ba00           mov eax, 0xba19b0
// 005b1c95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005b1c90()
{
    return &G;
}
