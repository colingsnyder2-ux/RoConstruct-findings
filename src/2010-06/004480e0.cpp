// roc 2010-06 004480e0  unit: RBX::CRenderSettings::W4GeometryQuality::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004480e0
//
// 004480e0  b8c016b800           mov eax, 0xb816c0
// 004480e5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004480e0()
{
    return &G;
}
