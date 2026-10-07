// roc 2010-06 005af1c0  unit: RBX::Feature::W4TopBottom::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005af1c0
//
// 005af1c0  b8a40fba00           mov eax, 0xba0fa4
// 005af1c5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005af1c0()
{
    return &G;
}
