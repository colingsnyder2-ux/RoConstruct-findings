// roc 2007-08 00534bc0  unit: RBX::VBrickColor::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534bc0
//
// 00534bc0  b8109a8900           mov eax, 0x899a10
// 00534bc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00534bc0()
{
    return &G;
}
