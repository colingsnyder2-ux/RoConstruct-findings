// from server: 100% by auto
// roc 2012-06 006eab10  unit: $$A6A_NXZ$0A::?$CallbackDescImpl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006eab10
//
// 006eab10  51                   push ecx
// 006eab11  56                   push esi
// 006eab12  8bf1                 mov esi, ecx
// 006eab14  8b4604               mov eax, dword ptr [esi + 4]
// 006eab17  85c0                 test eax, eax
// 006eab19  741c                 je 0x6eab37
// 006eab1b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006eab1f  8b5608               mov edx, dword ptr [esi + 8]
// 006eab22  51                   push ecx
// 006eab23  56                   push esi
// 006eab24  52                   push edx
// 006eab25  50                   push eax
// 006eab26  e8c562ffff           call 0x6e0df0
// 006eab2b  8b4604               mov eax, dword ptr [esi + 4]
// 006eab2e  50                   push eax
// 006eab2f  e8e0752900           call 0x982114
// 006eab34  83c414               add esp, 0x14
// 006eab37  c7460400000000       mov dword ptr [esi + 4], 0
// 006eab3e  c7460800000000       mov dword ptr [esi + 8], 0
// 006eab45  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 006eab4c  5e                   pop esi
// 006eab4d  59                   pop ecx
// 006eab4e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
