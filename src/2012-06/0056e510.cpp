// roc 2012-06 0056e510  unit: RBX::Network::IdSerializer  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0056e510
//
// 0056e510  51                   push ecx
// 0056e511  56                   push esi
// 0056e512  8bf1                 mov esi, ecx
// 0056e514  8b4604               mov eax, dword ptr [esi + 4]
// 0056e517  85c0                 test eax, eax
// 0056e519  741c                 je 0x56e537
// 0056e51b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0056e51f  8b5608               mov edx, dword ptr [esi + 8]
// 0056e522  51                   push ecx
// 0056e523  56                   push esi
// 0056e524  52                   push edx
// 0056e525  50                   push eax
// 0056e526  e8b5fdffff           call 0x56e2e0
// 0056e52b  8b4604               mov eax, dword ptr [esi + 4]
// 0056e52e  50                   push eax
// 0056e52f  e8e03b4100           call 0x982114
// 0056e534  83c414               add esp, 0x14
// 0056e537  c7460400000000       mov dword ptr [esi + 4], 0
// 0056e53e  c7460800000000       mov dword ptr [esi + 8], 0
// 0056e545  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0056e54c  5e                   pop esi
// 0056e54d  59                   pop ecx
// 0056e54e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
