// roc 2008-06 005b6db0  unit: RBX::Soundscape::VSoundId::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6db0
//
// 005b6db0  b8e8d39400           mov eax, 0x94d3e8
// 005b6db5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005b6db0()
{
    return &G;
}
