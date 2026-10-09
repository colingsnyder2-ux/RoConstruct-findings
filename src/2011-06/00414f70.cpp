// roc 2011-06 00414f70  unit: CChildFrame  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00414f70
//
// 00414f70  56                   push esi
// 00414f71  8b742408             mov esi, dword ptr [esp + 8]
// 00414f75  33c0                 xor eax, eax
// 00414f77  894618               mov dword ptr [esi + 0x18], eax
// 00414f7a  89461c               mov dword ptr [esi + 0x1c], eax
// 00414f7d  b8ff7f0000           mov eax, 0x7fff
// 00414f82  56                   push esi
// 00414f83  894610               mov dword ptr [esi + 0x10], eax
// 00414f86  894614               mov dword ptr [esi + 0x14], eax
// 00414f89  e83e583f00           call 0x80a7cc
// 00414f8e  85c0                 test eax, eax
// 00414f90  7504                 jne 0x414f96
// 00414f92  5e                   pop esi
// 00414f93  c20400               ret 4
// 00414f96  814e2000000002       or dword ptr [esi + 0x20], 0x2000000
// 00414f9d  b801000000           mov eax, 1
// 00414fa2  5e                   pop esi
// 00414fa3  c20400               ret 4
// copied from an identical function in another client (function ?init@ns_ROCX00000c@@YGHPAUCChildFrame@1@@Z)

namespace ns_ROCX00000c {
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
