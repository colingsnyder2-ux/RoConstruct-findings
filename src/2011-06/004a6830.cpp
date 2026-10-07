// roc 2011-06 004a6830  unit: RBX::VBrickColor::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a6830
//
// 004a6830  b8b4b0c100           mov eax, 0xc1b0b4
// 004a6835  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a6830()
{
    return &G;
}
