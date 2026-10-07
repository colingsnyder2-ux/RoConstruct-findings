// roc 2009-06 005e52f0  unit: G3D::VVector2::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e52f0
//
// 005e52f0  b8a810a000           mov eax, 0xa010a8
// 005e52f5  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_005e52f0()
{
    return &G;
}
