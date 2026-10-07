// roc 2011-06 005c5f40  unit: RBX::DataModel::W4GearGenreSetting::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c5f40
//
// 005c5f40  b8dce0c300           mov eax, 0xc3e0dc
// 005c5f45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c5f40()
{
    return &G;
}
