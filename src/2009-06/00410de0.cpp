// roc 2009-06 00410de0  unit: CChildFrame  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00410de0
//
// 00410de0  56                   push esi
// 00410de1  8b742408             mov esi, dword ptr [esp + 8]
// 00410de5  33c0                 xor eax, eax
// 00410de7  894618               mov dword ptr [esi + 0x18], eax
// 00410dea  89461c               mov dword ptr [esi + 0x1c], eax
// 00410ded  b8ff7f0000           mov eax, 0x7fff
// 00410df2  56                   push esi
// 00410df3  894610               mov dword ptr [esi + 0x10], eax
// 00410df6  894614               mov dword ptr [esi + 0x14], eax
// 00410df9  e8a8833000           call 0x7191a6
// 00410dfe  85c0                 test eax, eax
// 00410e00  7504                 jne 0x410e06
// 00410e02  5e                   pop esi
// 00410e03  c20400               ret 4
// 00410e06  814e2000000002       or dword ptr [esi + 0x20], 0x2000000
// 00410e0d  b801000000           mov eax, 1
// 00410e12  5e                   pop esi
// 00410e13  c20400               ret 4
// copied from an identical function in another client (function ?init@ns_ROCX000006@@YGHPAUCChildFrame@1@@Z)

namespace ns_ROCX000006 {
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
