// roc 2007-08 00620220  unit: RBX::ScoreHud  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00620220
//
// 00620220  51                   push ecx
// 00620221  56                   push esi
// 00620222  8bf1                 mov esi, ecx
// 00620224  8b4604               mov eax, dword ptr [esi + 4]
// 00620227  85c0                 test eax, eax
// 00620229  741c                 je 0x620247
// 0062022b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062022f  8b5608               mov edx, dword ptr [esi + 8]
// 00620232  51                   push ecx
// 00620233  56                   push esi
// 00620234  52                   push edx
// 00620235  50                   push eax
// 00620236  e8c5e4ffff           call 0x61e700
// 0062023b  8b4604               mov eax, dword ptr [esi + 4]
// 0062023e  50                   push eax
// 0062023f  e81efa0000           call 0x62fc62
// 00620244  83c414               add esp, 0x14
// 00620247  c7460400000000       mov dword ptr [esi + 4], 0
// 0062024e  c7460800000000       mov dword ptr [esi + 8], 0
// 00620255  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0062025c  5e                   pop esi
// 0062025d  59                   pop ecx
// 0062025e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
