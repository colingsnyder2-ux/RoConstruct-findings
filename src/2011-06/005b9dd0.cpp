// roc 2011-06 005b9dd0  unit: RBX::W4NormalId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b9dd0
//
// 005b9dd0  b8c0c6c300           mov eax, 0xc3c6c0
// 005b9dd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005b9dd0()
{
    return &G;
}
