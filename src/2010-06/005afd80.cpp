// roc 2010-06 005afd80  unit: G3D::Vector3::W4Axis::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005afd80
//
// 005afd80  b84c12ba00           mov eax, 0xba124c
// 005afd85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005afd80()
{
    return &G;
}
