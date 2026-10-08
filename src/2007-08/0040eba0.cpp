// from server: 100% by colin
// roc 2007-08 0040eba0  unit: CChildFrame  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040eba0
//
// 0040eba0  56                   push esi
// 0040eba1  8b742408             mov esi, dword ptr [esp + 8]
// 0040eba5  33c0                 xor eax, eax
// 0040eba7  894618               mov dword ptr [esi + 0x18], eax
// 0040ebaa  89461c               mov dword ptr [esi + 0x1c], eax
// 0040ebad  b8ff7f0000           mov eax, 0x7fff
// 0040ebb2  56                   push esi
// 0040ebb3  894610               mov dword ptr [esi + 0x10], eax
// 0040ebb6  894614               mov dword ptr [esi + 0x14], eax
// 0040ebb9  e8ee172200           call 0x6303ac
// 0040ebbe  85c0                 test eax, eax
// 0040ebc0  7504                 jne 0x40ebc6
// 0040ebc2  5e                   pop esi
// 0040ebc3  c20400               ret 4
// 0040ebc6  814e2000000002       or dword ptr [esi + 0x20], 0x2000000
// 0040ebcd  b801000000           mov eax, 1
// 0040ebd2  5e                   pop esi
// 0040ebd3  c20400               ret 4

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
