// from server: 72% by colin
// roc 2007-08 0040d600  unit: ChatEnter  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040d600
//
// 0040d600  56                   push esi
// 0040d601  8bf1                 mov esi, ecx
// 0040d603  e8542c2200           call 0x63025c
// 0040d608  33c0                 xor eax, eax
// 0040d60a  898688000000         mov dword ptr [esi + 0x88], eax
// 0040d610  c7061c667800         mov dword ptr [esi], 0x78661c
// 0040d616  89868c000000         mov dword ptr [esi + 0x8c], eax
// 0040d61c  898690000000         mov dword ptr [esi + 0x90], eax
// 0040d622  898698000000         mov dword ptr [esi + 0x98], eax
// 0040d628  c78694000000e0647800 mov dword ptr [esi + 0x94], 0x7864e0
// 0040d632  89869c000000         mov dword ptr [esi + 0x9c], eax
// 0040d638  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 0040d63e  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 0040d644  8bc6                 mov eax, esi
// 0040d646  5e                   pop esi
// 0040d647  c3                   ret 

struct ChatEnter {
    char pad[0x88];
    int field_88;
    int field_8c;
    int field_90;
    int field_94;
    int field_98;
    int field_9c;
    int field_a0;
    int field_a4;
    ChatEnter* construct();
};

extern "C" void __stdcall sub_63025c();

ChatEnter* ChatEnter::construct()
{
    sub_63025c();
    field_88 = 0;
    *(int*)this = 0x78661c;
    field_8c = 0;
    field_90 = 0;
    field_98 = 0;
    field_94 = 0x7864e0;
    field_9c = 0;
    field_a0 = 0;
    field_a4 = 0;
    return this;
}
