// roc 2011-06 005a1100  unit: RBX::Soundscape::W4ReverbType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a1100
//
// 005a1100  b86083c300           mov eax, 0xc38360
// 005a1105  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005a1100()
{
    return &G;
}
