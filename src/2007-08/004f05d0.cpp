// roc 2007-08 004f05d0  unit: RBX::Render::AggregatingSceneManager  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f05d0
//
// 004f05d0  51                   push ecx
// 004f05d1  56                   push esi
// 004f05d2  8bf1                 mov esi, ecx
// 004f05d4  8b4604               mov eax, dword ptr [esi + 4]
// 004f05d7  85c0                 test eax, eax
// 004f05d9  741c                 je 0x4f05f7
// 004f05db  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f05df  8b5608               mov edx, dword ptr [esi + 8]
// 004f05e2  51                   push ecx
// 004f05e3  56                   push esi
// 004f05e4  52                   push edx
// 004f05e5  50                   push eax
// 004f05e6  e865f8ffff           call 0x4efe50
// 004f05eb  8b4604               mov eax, dword ptr [esi + 4]
// 004f05ee  50                   push eax
// 004f05ef  e86ef61300           call 0x62fc62
// 004f05f4  83c414               add esp, 0x14
// 004f05f7  c7460400000000       mov dword ptr [esi + 4], 0
// 004f05fe  c7460800000000       mov dword ptr [esi + 8], 0
// 004f0605  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004f060c  5e                   pop esi
// 004f060d  59                   pop ecx
// 004f060e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
