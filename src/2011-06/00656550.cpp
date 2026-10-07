// roc 2011-06 00656550  unit: std::D::DU?$char_traits::V?$basic_string::V?$basic_path::V?$basic_filesystem_error::U?$error_info_injector::?$clone_impl  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00656550
//
// 00656550  56                   push esi
// 00656551  8bf1                 mov esi, ecx
// 00656553  e8a8fcffff           call 0x656200
// 00656558  8b4604               mov eax, dword ptr [esi + 4]
// 0065655b  50                   push eax
// 0065655c  e8f73a1b00           call 0x80a058
// 00656561  83c404               add esp, 4
// 00656564  c7460400000000       mov dword ptr [esi + 4], 0
// 0065656b  5e                   pop esi
// 0065656c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
