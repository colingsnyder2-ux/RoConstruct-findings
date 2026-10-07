// roc 2011-06 005c6240  unit: RBX::DataModel::W4GearType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c6240
//
// 005c6240  b89ce1c300           mov eax, 0xc3e19c
// 005c6245  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c6240()
{
    return &G;
}
