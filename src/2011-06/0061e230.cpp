// roc 2011-06 0061e230  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061e230
//
// 0061e230  56                   push esi
// 0061e231  8bf1                 mov esi, ecx
// 0061e233  e8d8faffff           call 0x61dd10
// 0061e238  8b4604               mov eax, dword ptr [esi + 4]
// 0061e23b  50                   push eax
// 0061e23c  e817be1e00           call 0x80a058
// 0061e241  83c404               add esp, 4
// 0061e244  c7460400000000       mov dword ptr [esi + 4], 0
// 0061e24b  5e                   pop esi
// 0061e24c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
