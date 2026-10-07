// roc 2011-06 0061dca0  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061dca0
//
// 0061dca0  56                   push esi
// 0061dca1  8bf1                 mov esi, ecx
// 0061dca3  e808b20f00           call 0x718eb0
// 0061dca8  8b4604               mov eax, dword ptr [esi + 4]
// 0061dcab  50                   push eax
// 0061dcac  e8a7c31e00           call 0x80a058
// 0061dcb1  83c404               add esp, 4
// 0061dcb4  c7460400000000       mov dword ptr [esi + 4], 0
// 0061dcbb  5e                   pop esi
// 0061dcbc  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
