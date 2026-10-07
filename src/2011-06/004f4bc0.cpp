// roc 2011-06 004f4bc0  unit: G3D::VColor3::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f4bc0
//
// 004f4bc0  b8f8afc200           mov eax, 0xc2aff8
// 004f4bc5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004f4bc0()
{
    return &G;
}
