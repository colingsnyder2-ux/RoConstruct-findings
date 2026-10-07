// roc 2012-06 008a9380  unit: RBX::Block  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a9380
//
// 008a9380  51                   push ecx
// 008a9381  56                   push esi
// 008a9382  8bf1                 mov esi, ecx
// 008a9384  8b4604               mov eax, dword ptr [esi + 4]
// 008a9387  85c0                 test eax, eax
// 008a9389  741c                 je 0x8a93a7
// 008a938b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008a938f  8b5608               mov edx, dword ptr [esi + 8]
// 008a9392  51                   push ecx
// 008a9393  56                   push esi
// 008a9394  52                   push edx
// 008a9395  50                   push eax
// 008a9396  e8a5fbffff           call 0x8a8f40
// 008a939b  8b4604               mov eax, dword ptr [esi + 4]
// 008a939e  50                   push eax
// 008a939f  e8708d0d00           call 0x982114
// 008a93a4  83c414               add esp, 0x14
// 008a93a7  c7460400000000       mov dword ptr [esi + 4], 0
// 008a93ae  c7460800000000       mov dword ptr [esi + 8], 0
// 008a93b5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 008a93bc  5e                   pop esi
// 008a93bd  59                   pop ecx
// 008a93be  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
