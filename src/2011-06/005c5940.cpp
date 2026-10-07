// roc 2011-06 005c5940  unit: RBX::DataModel::W4CreatorType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c5940
//
// 005c5940  b880dfc300           mov eax, 0xc3df80
// 005c5945  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c5940()
{
    return &G;
}
