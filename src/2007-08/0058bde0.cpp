// from server: 79% by colin
// roc 2007-08 0058bde0  unit: RBX::Stats::I::?$TypedStatsItem  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058bde0
//
// 0058bde0  f1                   int1 
// 0058bde1  7a00                 jp 0x58bde3
// 0058bde3  c7465cbcf17a00       mov dword ptr [esi + 0x5c], 0x7af1bc
// 0058bdea  c74674acf17a00       mov dword ptr [esi + 0x74], 0x7af1ac
// 0058bdf1  c7868c0000009cf17a00 mov dword ptr [esi + 0x8c], 0x7af19c
// 0058bdfb  c786e800000090f17a00 mov dword ptr [esi + 0xe8], 0x7af190
// 0058be05  e8b6e9ffff           call 0x58a7c0
// 0058be0a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058be0e  89460c               mov dword ptr [esi + 0xc], eax
// 0058be11  8bc6                 mov eax, esi
// 0058be13  5e                   pop esi
// 0058be14  64890d00000000       mov dword ptr fs:[0], ecx
// 0058be1b  83c410               add esp, 0x10
// 0058be1e  c3                   ret 

struct TypedStatsItem {
    char pad[0x5c];
    void* vtable_5c;
    char pad2[0x14];
    void* vtable_74;
    char pad3[0x14];
    void* vtable_8c;
    char pad4[0x58];
    void* vtable_e8;
    int field_c;
    void construct();
};

extern "C" int __cdecl sub_58A7C0();

void TypedStatsItem::construct() {
    vtable_5c = (void*)0x7af1bc;
    vtable_74 = (void*)0x7af1ac;
    vtable_8c = (void*)0x7af19c;
    vtable_e8 = (void*)0x7af190;
    field_c = sub_58A7C0();
}
