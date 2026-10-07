// roc 2008-06 005eccd0  unit: RBX::W4SurfaceType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eccd0
//
// 005eccd0  b8005e9500           mov eax, 0x955e00
// 005eccd5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005eccd0()
{
    return &G;
}
