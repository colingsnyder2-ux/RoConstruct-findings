// roc 2010-06 00445b40  unit: G3D::VVector2int16::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00445b40
//
// 00445b40  b8e411b800           mov eax, 0xb811e4
// 00445b45  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_00445b40()
{
    return &G;
}
