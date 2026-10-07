// roc 2008-06 0048b1f0  unit: RBX::VBrickColor::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b1f0
//
// 0048b1f0  b898539300           mov eax, 0x935398
// 0048b1f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_0048b1f0()
{
    return &G;
}
