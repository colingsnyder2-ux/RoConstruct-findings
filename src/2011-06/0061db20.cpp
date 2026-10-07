// roc 2011-06 0061db20  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061db20
//
// 0061db20  51                   push ecx
// 0061db21  56                   push esi
// 0061db22  8bf1                 mov esi, ecx
// 0061db24  8b4604               mov eax, dword ptr [esi + 4]
// 0061db27  85c0                 test eax, eax
// 0061db29  741c                 je 0x61db47
// 0061db2b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0061db2f  8b5608               mov edx, dword ptr [esi + 8]
// 0061db32  51                   push ecx
// 0061db33  56                   push esi
// 0061db34  52                   push edx
// 0061db35  50                   push eax
// 0061db36  e8f5e81d00           call 0x7fc430
// 0061db3b  8b4604               mov eax, dword ptr [esi + 4]
// 0061db3e  50                   push eax
// 0061db3f  e814c51e00           call 0x80a058
// 0061db44  83c414               add esp, 0x14
// 0061db47  c7460400000000       mov dword ptr [esi + 4], 0
// 0061db4e  c7460800000000       mov dword ptr [esi + 8], 0
// 0061db55  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0061db5c  5e                   pop esi
// 0061db5d  59                   pop ecx
// 0061db5e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
