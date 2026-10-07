// roc 2010-06 004e6060  unit: G3D::VRay::?$holder  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e6060
//
// 004e6060  b87c1cb900           mov eax, 0xb91c7c
// 004e6065  c3                   ret 
// auto-matched from its assembly shape

extern char G;

char* func_004e6060()
{
    return &G;
}
