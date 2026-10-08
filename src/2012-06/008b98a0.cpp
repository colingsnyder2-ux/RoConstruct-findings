// from server: 100% by auto
// roc 2012-06 008b98a0  unit: seg_008b0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008b98a0
//
// 008b98a0  51                   push ecx
// 008b98a1  56                   push esi
// 008b98a2  8bf1                 mov esi, ecx
// 008b98a4  8b4604               mov eax, dword ptr [esi + 4]
// 008b98a7  85c0                 test eax, eax
// 008b98a9  741c                 je 0x8b98c7
// 008b98ab  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008b98af  8b5608               mov edx, dword ptr [esi + 8]
// 008b98b2  51                   push ecx
// 008b98b3  56                   push esi
// 008b98b4  52                   push edx
// 008b98b5  50                   push eax
// 008b98b6  e865b0faff           call 0x864920
// 008b98bb  8b4604               mov eax, dword ptr [esi + 4]
// 008b98be  50                   push eax
// 008b98bf  e850880c00           call 0x982114
// 008b98c4  83c414               add esp, 0x14
// 008b98c7  c7460400000000       mov dword ptr [esi + 4], 0
// 008b98ce  c7460800000000       mov dword ptr [esi + 8], 0
// 008b98d5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 008b98dc  5e                   pop esi
// 008b98dd  59                   pop ecx
// 008b98de  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
