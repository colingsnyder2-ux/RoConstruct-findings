// roc 2009-06 00666520  unit: RBX::KernelJoint  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00666520
//
// 00666520  8b442404             mov eax, dword ptr [esp + 4]
// 00666524  d981bc010000         fld dword ptr [ecx + 0x1bc]
// 0066652a  d918                 fstp dword ptr [eax]
// 0066652c  d981c0010000         fld dword ptr [ecx + 0x1c0]
// 00666532  d95804               fstp dword ptr [eax + 4]
// 00666535  d981c4010000         fld dword ptr [ecx + 0x1c4]
// 0066653b  d95808               fstp dword ptr [eax + 8]
// 0066653e  c20400               ret 4
// copied from an identical function in another client (function ?get@S@ns_ROCX000012@@QAE?AUColor3@2@XZ)

namespace ns_ROCX000012 {
// from server: 100% by sophus
struct Color3
{
    float x, y, z;
};

struct S
{
    Color3 get();
};

Color3 S::get()
{
    Color3 c;
    c.x = *(float *)((char *)this + 0x1bc);
    c.y = *(float *)((char *)this + 0x1c0);
    c.z = *(float *)((char *)this + 0x1c4);
    return c;
}
}
