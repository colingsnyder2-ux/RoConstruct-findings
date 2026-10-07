// roc 2011-06 005c2240  unit: RBX::HopperBin::W4BinType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c2240
//
// 005c2240  b8acd1c300           mov eax, 0xc3d1ac
// 005c2245  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c2240()
{
    return &G;
}
