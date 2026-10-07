// roc 2011-06 005c5340  unit: G3D::Vector3::W4Axis::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c5340
//
// 005c5340  b83cdec300           mov eax, 0xc3de3c
// 005c5345  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005c5340()
{
    return &G;
}
