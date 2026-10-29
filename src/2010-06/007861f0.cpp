// roc 2010-06 007861f0  unit: RBX::HUMAN::GettingUp  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007861f0
//
// 007861f0  8bc1                 mov eax, ecx
// 007861f2  33c9                 xor ecx, ecx
// 007861f4  894804               mov dword ptr [eax + 4], ecx
// 007861f7  c74008ffffffff       mov dword ptr [eax + 8], 0xffffffff
// 007861fe  894810               mov dword ptr [eax + 0x10], ecx
// 00786201  894814               mov dword ptr [eax + 0x14], ecx
// 00786204  89480c               mov dword ptr [eax + 0xc], ecx
// 00786207  c3                   ret 
// copied from an identical function in another client (function ?init@RBX_HUMAN_GettingUp@ns_ROCX000006@@QAEPAU12@XZ)

namespace ns_ROCX000006 {
struct RBX_HUMAN_GettingUp
{
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    RBX_HUMAN_GettingUp* init();
};

RBX_HUMAN_GettingUp* RBX_HUMAN_GettingUp::init()
{
    field_4 = 0;
    field_8 = -1;
    field_10 = 0;
    field_14 = 0;
    field_c = 0;
    return this;
}
}
