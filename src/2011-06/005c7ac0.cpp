// roc 2011-06 005c7ac0  unit: RBX::SpecialShape::W4MeshType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c7ac0
//
// 005c7ac0  b898e8c300           mov eax, 0xc3e898
// 005c7ac5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c7ac0()
{
    return &G;
}
