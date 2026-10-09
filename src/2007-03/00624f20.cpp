// roc 2007-03 00624f20  unit: seg_00620000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00624f20
//
// 00624f20  8b542404             mov edx, dword ptr [esp + 4]
// 00624f24  8bc1                 mov eax, ecx
// 00624f26  33c9                 xor ecx, ecx
// 00624f28  8908                 mov dword ptr [eax], ecx
// 00624f2a  895004               mov dword ptr [eax + 4], edx
// 00624f2d  894808               mov dword ptr [eax + 8], ecx
// 00624f30  89480c               mov dword ptr [eax + 0xc], ecx
// 00624f33  c20400               ret 4
// copied from an identical function in another client (function ?construct@CXTPCommandBar@ns_ROCX000006@@QAEPAU12@H@Z)

namespace ns_ROCX000006 {
struct CXTPCommandBar {
    int field0;
    int field4;
    int field8;
    int fieldC;
    CXTPCommandBar* construct(int arg);
};

CXTPCommandBar* CXTPCommandBar::construct(int arg)
{
    field0 = 0;
    field4 = arg;
    field8 = 0;
    fieldC = 0;
    return this;
}
}
