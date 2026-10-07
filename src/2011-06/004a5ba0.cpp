// roc 2011-06 004a5ba0  unit: G3D::VVector3::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a5ba0
//
// 004a5ba0  b81cb0c100           mov eax, 0xc1b01c
// 004a5ba5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a5ba0()
{
    return &G;
}
