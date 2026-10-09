// roc 2010-06 00410d30  unit: CChildFrame  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00410d30
//
// 00410d30  56                   push esi
// 00410d31  8b742408             mov esi, dword ptr [esp + 8]
// 00410d35  33c0                 xor eax, eax
// 00410d37  894618               mov dword ptr [esi + 0x18], eax
// 00410d3a  89461c               mov dword ptr [esi + 0x1c], eax
// 00410d3d  b8ff7f0000           mov eax, 0x7fff
// 00410d42  56                   push esi
// 00410d43  894610               mov dword ptr [esi + 0x10], eax
// 00410d46  894614               mov dword ptr [esi + 0x14], eax
// 00410d49  e8c0733900           call 0x7a810e
// 00410d4e  85c0                 test eax, eax
// 00410d50  7504                 jne 0x410d56
// 00410d52  5e                   pop esi
// 00410d53  c20400               ret 4
// 00410d56  814e2000000002       or dword ptr [esi + 0x20], 0x2000000
// 00410d5d  b801000000           mov eax, 1
// 00410d62  5e                   pop esi
// 00410d63  c20400               ret 4
// copied from an identical function in another client (function ?init@ns_ROCX000010@@YGHPAUCChildFrame@1@@Z)

namespace ns_ROCX000010 {
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
