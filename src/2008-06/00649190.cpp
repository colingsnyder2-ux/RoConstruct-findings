// roc 2008-06 00649190  unit: RBX::Ball  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00649190
//
// 00649190  d94104               fld dword ptr [ecx + 4]
// 00649193  d80dac9b8100         fmul dword ptr [0x819bac]
// 00649199  d95910               fstp dword ptr [ecx + 0x10]
// 0064919c  c3                   ret 
// copied from an identical function in another client (function ?compute@Ball@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
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
