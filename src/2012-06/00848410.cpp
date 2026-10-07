// roc 2012-06 00848410  unit: RBX::LibraryService::VLibraryStateObject::?$sp_counted_impl_p  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00848410
//
// 00848410  56                   push esi
// 00848411  8bf1                 mov esi, ecx
// 00848413  e8e8efffff           call 0x847400
// 00848418  8b4604               mov eax, dword ptr [esi + 4]
// 0084841b  50                   push eax
// 0084841c  e8f39c1300           call 0x982114
// 00848421  83c404               add esp, 4
// 00848424  c7460400000000       mov dword ptr [esi + 4], 0
// 0084842b  5e                   pop esi
// 0084842c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
