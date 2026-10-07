// roc 2011-06 004f29d0  unit: RBX::Network::IdSerializer  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f29d0
//
// 004f29d0  51                   push ecx
// 004f29d1  56                   push esi
// 004f29d2  8bf1                 mov esi, ecx
// 004f29d4  8b4604               mov eax, dword ptr [esi + 4]
// 004f29d7  85c0                 test eax, eax
// 004f29d9  741c                 je 0x4f29f7
// 004f29db  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f29df  8b5608               mov edx, dword ptr [esi + 8]
// 004f29e2  51                   push ecx
// 004f29e3  56                   push esi
// 004f29e4  52                   push edx
// 004f29e5  50                   push eax
// 004f29e6  e895fdffff           call 0x4f2780
// 004f29eb  8b4604               mov eax, dword ptr [esi + 4]
// 004f29ee  50                   push eax
// 004f29ef  e864763100           call 0x80a058
// 004f29f4  83c414               add esp, 0x14
// 004f29f7  c7460400000000       mov dword ptr [esi + 4], 0
// 004f29fe  c7460800000000       mov dword ptr [esi + 8], 0
// 004f2a05  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004f2a0c  5e                   pop esi
// 004f2a0d  59                   pop ecx
// 004f2a0e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
