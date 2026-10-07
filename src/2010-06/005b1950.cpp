// roc 2010-06 005b1950  unit: RBX::W4SoundType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b1950
//
// 005b1950  b81419ba00           mov eax, 0xba1914
// 005b1955  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005b1950()
{
    return &G;
}
