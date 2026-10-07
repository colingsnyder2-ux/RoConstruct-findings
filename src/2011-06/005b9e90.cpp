// roc 2011-06 005b9e90  unit: RBX::VRegion3::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b9e90
//
// 005b9e90  b8dcc6c300           mov eax, 0xc3c6dc
// 005b9e95  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005b9e90()
{
    return &G;
}
