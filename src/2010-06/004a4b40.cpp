// roc 2010-06 004a4b40  unit: G3D::VVector3::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a4b40
//
// 004a4b40  b8c87bb800           mov eax, 0xb87bc8
// 004a4b45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004a4b40()
{
    return &G;
}
