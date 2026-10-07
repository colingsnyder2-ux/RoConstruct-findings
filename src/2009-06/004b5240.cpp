// roc 2009-06 004b5240  unit: RBX::VBrickColor::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b5240
//
// 004b5240  b810ca9e00           mov eax, 0x9eca10
// 004b5245  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004b5240()
{
    return &G;
}
