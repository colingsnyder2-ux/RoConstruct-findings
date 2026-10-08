// from server: 100% by auto
// roc 2012-06 008b0390  unit: RBX::GuiLayerCollector  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008b0390
//
// 008b0390  51                   push ecx
// 008b0391  56                   push esi
// 008b0392  8bf1                 mov esi, ecx
// 008b0394  8b4604               mov eax, dword ptr [esi + 4]
// 008b0397  85c0                 test eax, eax
// 008b0399  741c                 je 0x8b03b7
// 008b039b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008b039f  8b5608               mov edx, dword ptr [esi + 8]
// 008b03a2  51                   push ecx
// 008b03a3  56                   push esi
// 008b03a4  52                   push edx
// 008b03a5  50                   push eax
// 008b03a6  e825f9ffff           call 0x8afcd0
// 008b03ab  8b4604               mov eax, dword ptr [esi + 4]
// 008b03ae  50                   push eax
// 008b03af  e8601d0d00           call 0x982114
// 008b03b4  83c414               add esp, 0x14
// 008b03b7  c7460400000000       mov dword ptr [esi + 4], 0
// 008b03be  c7460800000000       mov dword ptr [esi + 8], 0
// 008b03c5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 008b03cc  5e                   pop esi
// 008b03cd  59                   pop ecx
// 008b03ce  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
