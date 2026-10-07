// roc 2011-06 007d30f0  unit: RBX::ScoreHud  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d30f0
//
// 007d30f0  51                   push ecx
// 007d30f1  56                   push esi
// 007d30f2  8bf1                 mov esi, ecx
// 007d30f4  8b4604               mov eax, dword ptr [esi + 4]
// 007d30f7  85c0                 test eax, eax
// 007d30f9  741c                 je 0x7d3117
// 007d30fb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007d30ff  8b5608               mov edx, dword ptr [esi + 8]
// 007d3102  51                   push ecx
// 007d3103  56                   push esi
// 007d3104  52                   push edx
// 007d3105  50                   push eax
// 007d3106  e805e6ffff           call 0x7d1710
// 007d310b  8b4604               mov eax, dword ptr [esi + 4]
// 007d310e  50                   push eax
// 007d310f  e8446f0300           call 0x80a058
// 007d3114  83c414               add esp, 0x14
// 007d3117  c7460400000000       mov dword ptr [esi + 4], 0
// 007d311e  c7460800000000       mov dword ptr [esi + 8], 0
// 007d3125  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 007d312c  5e                   pop esi
// 007d312d  59                   pop ecx
// 007d312e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
