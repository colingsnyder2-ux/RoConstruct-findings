// roc 2011-06 005c5c40  unit: RBX::DataModel::W4Genre::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c5c40
//
// 005c5c40  b830e0c300           mov eax, 0xc3e030
// 005c5c45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c5c40()
{
    return &G;
}
