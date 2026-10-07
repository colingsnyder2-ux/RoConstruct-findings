// roc 2011-06 005c4880  unit: RBX::Feature::W4TopBottom::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c4880
//
// 005c4880  b894dbc300           mov eax, 0xc3db94
// 005c4885  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c4880()
{
    return &G;
}
