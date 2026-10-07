// roc 2012-06 007c6960  unit: RBX::VRegion3int16::?$TypedPropertyDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007c6960
//
// 007c6960  51                   push ecx
// 007c6961  56                   push esi
// 007c6962  8bf1                 mov esi, ecx
// 007c6964  8b4604               mov eax, dword ptr [esi + 4]
// 007c6967  85c0                 test eax, eax
// 007c6969  741c                 je 0x7c6987
// 007c696b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007c696f  8b5608               mov edx, dword ptr [esi + 8]
// 007c6972  51                   push ecx
// 007c6973  56                   push esi
// 007c6974  52                   push edx
// 007c6975  50                   push eax
// 007c6976  e8a5f6ffff           call 0x7c6020
// 007c697b  8b4604               mov eax, dword ptr [esi + 4]
// 007c697e  50                   push eax
// 007c697f  e890b71b00           call 0x982114
// 007c6984  83c414               add esp, 0x14
// 007c6987  c7460400000000       mov dword ptr [esi + 4], 0
// 007c698e  c7460800000000       mov dword ptr [esi + 8], 0
// 007c6995  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 007c699c  5e                   pop esi
// 007c699d  59                   pop ecx
// 007c699e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
