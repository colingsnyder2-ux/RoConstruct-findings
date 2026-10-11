// roc 2011-06 004a3a60  unit: RBX::Network::Player  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a3a60
//
// 004a3a60  56                   push esi
// 004a3a61  8b742408             mov esi, dword ptr [esp + 8]
// 004a3a65  85f6                 test esi, esi
// 004a3a67  742c                 je 0x4a3a95
// 004a3a69  8b0e                 mov ecx, dword ptr [esi]
// 004a3a6b  85c9                 test ecx, ecx
// 004a3a6d  7409                 je 0x4a3a78
// 004a3a6f  8b01                 mov eax, dword ptr [ecx]
// 004a3a71  8b5004               mov edx, dword ptr [eax + 4]
// 004a3a74  ffd2                 call edx
// 004a3a76  eb05                 jmp 0x4a3a7d
// 004a3a78  b8447ac000           mov eax, 0xc07a44
// 004a3a7d  68607bc000           push 0xc07b60
// 004a3a82  8bc8                 mov ecx, eax
// 004a3a84  ff15500aa400         call dword ptr [0xa40a50]
// 004a3a8a  84c0                 test al, al
// 004a3a8c  7407                 je 0x4a3a95
// 004a3a8e  8b06                 mov eax, dword ptr [esi]
// 004a3a90  83c004               add eax, 4
// 004a3a93  5e                   pop esi
// 004a3a94  c3                   ret 
// 004a3a95  33c0                 xor eax, eax
// 004a3a97  5e                   pop esi
// 004a3a98  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$any_cast@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@YAPAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVany@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
