// roc 2011-06 004f4c00  unit: G3D::VVector2::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f4c00
//
// 004f4c00  b844b0c200           mov eax, 0xc2b044
// 004f4c05  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004f4c00()
{
    return &G;
}
