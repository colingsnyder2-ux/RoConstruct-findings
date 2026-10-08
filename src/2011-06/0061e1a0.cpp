// from server: 100% by auto
// roc 2011-06 0061e1a0  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061e1a0
//
// 0061e1a0  51                   push ecx
// 0061e1a1  56                   push esi
// 0061e1a2  8bf1                 mov esi, ecx
// 0061e1a4  8b4604               mov eax, dword ptr [esi + 4]
// 0061e1a7  85c0                 test eax, eax
// 0061e1a9  741c                 je 0x61e1c7
// 0061e1ab  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0061e1af  8b5608               mov edx, dword ptr [esi + 8]
// 0061e1b2  51                   push ecx
// 0061e1b3  56                   push esi
// 0061e1b4  52                   push edx
// 0061e1b5  50                   push eax
// 0061e1b6  e825efffff           call 0x61d0e0
// 0061e1bb  8b4604               mov eax, dword ptr [esi + 4]
// 0061e1be  50                   push eax
// 0061e1bf  e894be1e00           call 0x80a058
// 0061e1c4  83c414               add esp, 0x14
// 0061e1c7  c7460400000000       mov dword ptr [esi + 4], 0
// 0061e1ce  c7460800000000       mov dword ptr [esi + 8], 0
// 0061e1d5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0061e1dc  5e                   pop esi
// 0061e1dd  59                   pop ecx
// 0061e1de  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
