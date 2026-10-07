// roc 2009-06 005e52e0  unit: G3D::VVector3::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e52e0
//
// 005e52e0  b88c10a000           mov eax, 0xa0108c
// 005e52e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005e52e0()
{
    return &G;
}
