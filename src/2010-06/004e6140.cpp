// roc 2010-06 004e6140  unit: G3D::VColor3::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e6140
//
// 004e6140  b89c24b900           mov eax, 0xb9249c
// 004e6145  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004e6140()
{
    return &G;
}
