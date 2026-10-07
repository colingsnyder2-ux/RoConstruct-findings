// roc 2010-06 005a5340  unit: G3D::VVector2::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a5340
//
// 005a5340  b8d8feb900           mov eax, 0xb9fed8
// 005a5345  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005a5340()
{
    return &G;
}
