// roc 2009-06 006d40a0  unit: RBX::Ball  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d40a0
//
// 006d40a0  d94104               fld dword ptr [ecx + 4]
// 006d40a3  d80d4cad8b00         fmul dword ptr [0x8bad4c]
// 006d40a9  d95910               fstp dword ptr [ecx + 0x10]
// 006d40ac  c3                   ret 
// copied from an identical function in another client (function ?compute@Ball@ns_ROCX000004@@QAEXXZ)

namespace ns_ROCX000004 {
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
