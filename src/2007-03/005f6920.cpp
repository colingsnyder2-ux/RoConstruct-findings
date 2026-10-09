// roc 2007-03 005f6920  unit: seg_005f0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f6920
//
// 005f6920  d94104               fld dword ptr [ecx + 4]
// 005f6923  d80d8c727900         fmul dword ptr [0x79728c]
// 005f6929  d95910               fstp dword ptr [ecx + 0x10]
// 005f692c  c3                   ret 
// copied from an identical function in another client (function ?compute@Ball@ns_ROCX000006@@QAEXXZ)

namespace ns_ROCX000006 {
struct Ball {
    int vtbl;
    float realRadius;
    int pad1;
    int pad2;
    float value;
    void compute();
};

extern float G;

void Ball::compute()
{
    value = realRadius * G;
}
}
