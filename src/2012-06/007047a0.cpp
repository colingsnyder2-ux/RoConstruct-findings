// from server: 100% by auto
// roc 2012-06 007047a0  unit: RBX::RootInstance  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007047a0
//
// 007047a0  51                   push ecx
// 007047a1  56                   push esi
// 007047a2  8bf1                 mov esi, ecx
// 007047a4  8b4604               mov eax, dword ptr [esi + 4]
// 007047a7  85c0                 test eax, eax
// 007047a9  741c                 je 0x7047c7
// 007047ab  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007047af  8b5608               mov edx, dword ptr [esi + 8]
// 007047b2  51                   push ecx
// 007047b3  56                   push esi
// 007047b4  52                   push edx
// 007047b5  50                   push eax
// 007047b6  e845a91a00           call 0x8af100
// 007047bb  8b4604               mov eax, dword ptr [esi + 4]
// 007047be  50                   push eax
// 007047bf  e850d92700           call 0x982114
// 007047c4  83c414               add esp, 0x14
// 007047c7  c7460400000000       mov dword ptr [esi + 4], 0
// 007047ce  c7460800000000       mov dword ptr [esi + 8], 0
// 007047d5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 007047dc  5e                   pop esi
// 007047dd  59                   pop ecx
// 007047de  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
