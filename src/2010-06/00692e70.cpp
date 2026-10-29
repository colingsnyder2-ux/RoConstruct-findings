// roc 2010-06 00692e70  unit: RBX::VHint::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00692e70
//
// 00692e70  8b442404             mov eax, dword ptr [esp + 4]
// 00692e74  d981bc010000         fld dword ptr [ecx + 0x1bc]
// 00692e7a  d918                 fstp dword ptr [eax]
// 00692e7c  d981c0010000         fld dword ptr [ecx + 0x1c0]
// 00692e82  d95804               fstp dword ptr [eax + 4]
// 00692e85  d981c4010000         fld dword ptr [ecx + 0x1c4]
// 00692e8b  d95808               fstp dword ptr [eax + 8]
// 00692e8e  c20400               ret 4
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