// roc 2007-08 00534b80  unit: G3D::VColor3::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534b80
//
// 00534b80  b8f4998900           mov eax, 0x8999f4
// 00534b85  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00534b80()
{
    return &G;
}
