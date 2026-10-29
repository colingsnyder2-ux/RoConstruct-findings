// roc 2011-06 006d08e0  unit: seg_006d0000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d08e0
//
// 006d08e0  8b442404             mov eax, dword ptr [esp + 4]
// 006d08e4  d981bc010000         fld dword ptr [ecx + 0x1bc]
// 006d08ea  d918                 fstp dword ptr [eax]
// 006d08ec  d981c0010000         fld dword ptr [ecx + 0x1c0]
// 006d08f2  d95804               fstp dword ptr [eax + 4]
// 006d08f5  d981c4010000         fld dword ptr [ecx + 0x1c4]
// 006d08fb  d95808               fstp dword ptr [eax + 8]
// 006d08fe  c20400               ret 4
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