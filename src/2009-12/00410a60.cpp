// roc 2009-12 00410a60  unit: CChildFrame  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00410a60
//
// 00410a60  56                   push esi
// 00410a61  8b742408             mov esi, dword ptr [esp + 8]
// 00410a65  33c0                 xor eax, eax
// 00410a67  894618               mov dword ptr [esi + 0x18], eax
// 00410a6a  89461c               mov dword ptr [esi + 0x1c], eax
// 00410a6d  b8ff7f0000           mov eax, 0x7fff
// 00410a72  56                   push esi
// 00410a73  894610               mov dword ptr [esi + 0x10], eax
// 00410a76  894614               mov dword ptr [esi + 0x14], eax
// 00410a79  e850353e00           call 0x7f3fce
// 00410a7e  85c0                 test eax, eax
// 00410a80  7504                 jne 0x410a86
// 00410a82  5e                   pop esi
// 00410a83  c20400               ret 4
// 00410a86  814e2000000002       or dword ptr [esi + 0x20], 0x2000000
// 00410a8d  b801000000           mov eax, 1
// 00410a92  5e                   pop esi
// 00410a93  c20400               ret 4
// copied from an identical function in another client (function ?init@ns_ROCX000014@@YGHPAUCChildFrame@1@@Z)

namespace ns_ROCX000014 {
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
