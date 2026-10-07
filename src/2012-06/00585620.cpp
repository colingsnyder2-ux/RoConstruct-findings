// roc 2012-06 00585620  unit: RBX::Network::Replicator  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00585620
//
// 00585620  51                   push ecx
// 00585621  56                   push esi
// 00585622  8bf1                 mov esi, ecx
// 00585624  8b4604               mov eax, dword ptr [esi + 4]
// 00585627  85c0                 test eax, eax
// 00585629  741c                 je 0x585647
// 0058562b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058562f  8b5608               mov edx, dword ptr [esi + 8]
// 00585632  51                   push ecx
// 00585633  56                   push esi
// 00585634  52                   push edx
// 00585635  50                   push eax
// 00585636  e825ddffff           call 0x583360
// 0058563b  8b4604               mov eax, dword ptr [esi + 4]
// 0058563e  50                   push eax
// 0058563f  e8d0ca3f00           call 0x982114
// 00585644  83c414               add esp, 0x14
// 00585647  c7460400000000       mov dword ptr [esi + 4], 0
// 0058564e  c7460800000000       mov dword ptr [esi + 8], 0
// 00585655  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0058565c  5e                   pop esi
// 0058565d  59                   pop ecx
// 0058565e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
