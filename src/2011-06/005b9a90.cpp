// roc 2011-06 005b9a90  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b9a90
//
// 005b9a90  56                   push esi
// 005b9a91  8b742408             mov esi, dword ptr [esp + 8]
// 005b9a95  85f6                 test esi, esi
// 005b9a97  742c                 je 0x5b9ac5
// 005b9a99  8b0e                 mov ecx, dword ptr [esi]
// 005b9a9b  85c9                 test ecx, ecx
// 005b9a9d  7409                 je 0x5b9aa8
// 005b9a9f  8b01                 mov eax, dword ptr [ecx]
// 005b9aa1  8b5004               mov edx, dword ptr [eax + 4]
// 005b9aa4  ffd2                 call edx
// 005b9aa6  eb05                 jmp 0x5b9aad
// 005b9aa8  b8447ac000           mov eax, 0xc07a44
// 005b9aad  684c7cc000           push 0xc07c4c
// 005b9ab2  8bc8                 mov ecx, eax
// 005b9ab4  ff15500aa400         call dword ptr [0xa40a50]
// 005b9aba  84c0                 test al, al
// 005b9abc  7407                 je 0x5b9ac5
// 005b9abe  8b06                 mov eax, dword ptr [esi]
// 005b9ac0  83c004               add eax, 4
// 005b9ac3  5e                   pop esi
// 005b9ac4  c3                   ret 
// 005b9ac5  33c0                 xor eax, eax
// 005b9ac7  5e                   pop esi
// 005b9ac8  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@H@boost@@YAPAHPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
