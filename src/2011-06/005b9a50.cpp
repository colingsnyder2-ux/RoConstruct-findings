// roc 2011-06 005b9a50  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005b9a50
//
// 005b9a50  56                   push esi
// 005b9a51  8b742408             mov esi, dword ptr [esp + 8]
// 005b9a55  85f6                 test esi, esi
// 005b9a57  742c                 je 0x5b9a85
// 005b9a59  8b0e                 mov ecx, dword ptr [esi]
// 005b9a5b  85c9                 test ecx, ecx
// 005b9a5d  7409                 je 0x5b9a68
// 005b9a5f  8b01                 mov eax, dword ptr [ecx]
// 005b9a61  8b5004               mov edx, dword ptr [eax + 4]
// 005b9a64  ffd2                 call edx
// 005b9a66  eb05                 jmp 0x5b9a6d
// 005b9a68  b8447ac000           mov eax, 0xc07a44
// 005b9a6d  68747ac000           push 0xc07a74
// 005b9a72  8bc8                 mov ecx, eax
// 005b9a74  ff15500aa400         call dword ptr [0xa40a50]
// 005b9a7a  84c0                 test al, al
// 005b9a7c  7407                 je 0x5b9a85
// 005b9a7e  8b06                 mov eax, dword ptr [esi]
// 005b9a80  83c004               add eax, 4
// 005b9a83  5e                   pop esi
// 005b9a84  c3                   ret 
// 005b9a85  33c0                 xor eax, eax
// 005b9a87  5e                   pop esi
// 005b9a88  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@_N@boost@@YAPA_NPAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
