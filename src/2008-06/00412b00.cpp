// roc 2008-06 00412b00  unit: CChildFrame  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00412b00
//
// 00412b00  56                   push esi
// 00412b01  8b742408             mov esi, dword ptr [esp + 8]
// 00412b05  33c0                 xor eax, eax
// 00412b07  894618               mov dword ptr [esi + 0x18], eax
// 00412b0a  89461c               mov dword ptr [esi + 0x1c], eax
// 00412b0d  b8ff7f0000           mov eax, 0x7fff
// 00412b12  56                   push esi
// 00412b13  894610               mov dword ptr [esi + 0x10], eax
// 00412b16  894614               mov dword ptr [esi + 0x14], eax
// 00412b19  e8e8e22800           call 0x6a0e06
// 00412b1e  85c0                 test eax, eax
// 00412b20  7504                 jne 0x412b26
// 00412b22  5e                   pop esi
// 00412b23  c20400               ret 4
// 00412b26  814e2000000002       or dword ptr [esi + 0x20], 0x2000000
// 00412b2d  b801000000           mov eax, 1
// 00412b32  5e                   pop esi
// 00412b33  c20400               ret 4
// copied from an identical function in another client (function ?init@ns_ROCX000009@@YGHPAUCChildFrame@1@@Z)

namespace ns_ROCX000009 {
struct CChildFrame {
    char pad[0x10];
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    unsigned int field_20;
};

extern "C" int __stdcall sub_6303ac(void*);

int __stdcall init(CChildFrame* self)
{
    self->field_18 = 0;
    self->field_1c = 0;
    self->field_10 = 0x7fff;
    self->field_14 = 0x7fff;
    if (sub_6303ac(self) == 0)
        return 0;
    self->field_20 |= 0x2000000;
    return 1;
}
}
