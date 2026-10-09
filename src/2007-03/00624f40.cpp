// roc 2007-03 00624f40  unit: seg_00620000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00624f40
//
// 00624f40  8bc1                 mov eax, ecx
// 00624f42  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00624f46  8b11                 mov edx, dword ptr [ecx]
// 00624f48  8910                 mov dword ptr [eax], edx
// 00624f4a  8b4904               mov ecx, dword ptr [ecx + 4]
// 00624f4d  894804               mov dword ptr [eax + 4], ecx
// 00624f50  33c9                 xor ecx, ecx
// 00624f52  89480c               mov dword ptr [eax + 0xc], ecx
// 00624f55  894808               mov dword ptr [eax + 8], ecx
// 00624f58  c20400               ret 4
// copied from an identical function in another client (function ?assign@CXTPCommandBar@ns_ROCX000007@@QAEPAU12@PBU12@@Z)

namespace ns_ROCX000007 {
struct CXTPCommandBar
{
    int field0;
    int field4;
    int field8;
    int fieldC;
    CXTPCommandBar* assign(const CXTPCommandBar* other);
};

CXTPCommandBar* CXTPCommandBar::assign(const CXTPCommandBar* other)
{
    field0 = other->field0;
    field4 = other->field4;
    fieldC = 0;
    field8 = 0;
    return this;
}
}
