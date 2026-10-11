// roc 2009-12 00642890  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00642890
//
// 00642890  56                   push esi
// 00642891  8b742408             mov esi, dword ptr [esp + 8]
// 00642895  85f6                 test esi, esi
// 00642897  742c                 je 0x6428c5
// 00642899  8b0e                 mov ecx, dword ptr [esi]
// 0064289b  85c9                 test ecx, ecx
// 0064289d  7409                 je 0x6428a8
// 0064289f  8b01                 mov eax, dword ptr [ecx]
// 006428a1  8b5004               mov edx, dword ptr [eax + 4]
// 006428a4  ffd2                 call edx
// 006428a6  eb05                 jmp 0x6428ad
// 006428a8  b80c03b000           mov eax, 0xb0030c
// 006428ad  68d033b000           push 0xb033d0
// 006428b2  8bc8                 mov ecx, eax
// 006428b4  ff1568b79800         call dword ptr [0x98b768]
// 006428ba  84c0                 test al, al
// 006428bc  7407                 je 0x6428c5
// 006428be  8b06                 mov eax, dword ptr [esi]
// 006428c0  83c004               add eax, 4
// 006428c3  5e                   pop esi
// 006428c4  c3                   ret 
// 006428c5  33c0                 xor eax, eax
// 006428c7  5e                   pop esi
// 006428c8  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@M@boost@@YAPAMPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
