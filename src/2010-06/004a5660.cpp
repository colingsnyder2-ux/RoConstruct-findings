// roc 2010-06 004a5660  unit: RBX::VBrickColor::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a5660
//
// 004a5660  b8647cb800           mov eax, 0xb87c64
// 004a5665  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a5660()
{
    return &G;
}
