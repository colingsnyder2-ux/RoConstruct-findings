// from server: 100% by auto
// roc 2011-06 006169d0  unit: RBX::RootInstance  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006169d0
//
// 006169d0  51                   push ecx
// 006169d1  56                   push esi
// 006169d2  8bf1                 mov esi, ecx
// 006169d4  8b4604               mov eax, dword ptr [esi + 4]
// 006169d7  85c0                 test eax, eax
// 006169d9  741c                 je 0x6169f7
// 006169db  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006169df  8b5608               mov edx, dword ptr [esi + 8]
// 006169e2  51                   push ecx
// 006169e3  56                   push esi
// 006169e4  52                   push edx
// 006169e5  50                   push eax
// 006169e6  e835880d00           call 0x6ef220
// 006169eb  8b4604               mov eax, dword ptr [esi + 4]
// 006169ee  50                   push eax
// 006169ef  e864361f00           call 0x80a058
// 006169f4  83c414               add esp, 0x14
// 006169f7  c7460400000000       mov dword ptr [esi + 4], 0
// 006169fe  c7460800000000       mov dword ptr [esi + 8], 0
// 00616a05  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00616a0c  5e                   pop esi
// 00616a0d  59                   pop ecx
// 00616a0e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
