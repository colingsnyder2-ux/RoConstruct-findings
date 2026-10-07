// roc 2009-06 00662fa0  unit: RBX::W4SurfaceType::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00662fa0
//
// 00662fa0  b8043ca100           mov eax, 0xa13c04
// 00662fa5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00662fa0()
{
    return &G;
}
