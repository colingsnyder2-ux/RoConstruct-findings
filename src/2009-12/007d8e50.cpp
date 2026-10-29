// roc 2009-12 007d8e50  unit: RBX::HUMAN::GettingUp  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d8e50
//
// 007d8e50  8bc1                 mov eax, ecx
// 007d8e52  33c9                 xor ecx, ecx
// 007d8e54  894804               mov dword ptr [eax + 4], ecx
// 007d8e57  c74008ffffffff       mov dword ptr [eax + 8], 0xffffffff
// 007d8e5e  894810               mov dword ptr [eax + 0x10], ecx
// 007d8e61  894814               mov dword ptr [eax + 0x14], ecx
// 007d8e64  89480c               mov dword ptr [eax + 0xc], ecx
// 007d8e67  c3                   ret 
// copied from an identical function in another client (function ?init@RBX_HUMAN_GettingUp@ns_ROCX000003@@QAEPAU12@XZ)

namespace ns_ROCX000003 {
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
