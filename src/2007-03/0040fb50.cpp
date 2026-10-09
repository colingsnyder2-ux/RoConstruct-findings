// roc 2007-03 0040fb50  unit: seg_00400000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040fb50
//
// 0040fb50  56                   push esi
// 0040fb51  8b742408             mov esi, dword ptr [esp + 8]
// 0040fb55  33c0                 xor eax, eax
// 0040fb57  894618               mov dword ptr [esi + 0x18], eax
// 0040fb5a  89461c               mov dword ptr [esi + 0x1c], eax
// 0040fb5d  b8ff7f0000           mov eax, 0x7fff
// 0040fb62  56                   push esi
// 0040fb63  894610               mov dword ptr [esi + 0x10], eax
// 0040fb66  894614               mov dword ptr [esi + 0x14], eax
// 0040fb69  e8d2ec2000           call 0x61e840
// 0040fb6e  85c0                 test eax, eax
// 0040fb70  7504                 jne 0x40fb76
// 0040fb72  5e                   pop esi
// 0040fb73  c20400               ret 4
// 0040fb76  814e2000000002       or dword ptr [esi + 0x20], 0x2000000
// 0040fb7d  b801000000           mov eax, 1
// 0040fb82  5e                   pop esi
// 0040fb83  c20400               ret 4
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
