// from server: 100% by auto
// roc 2011-06 00795960  unit: RBX::VHttp::?$sp_counted_impl_p  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00795960
//
// 00795960  56                   push esi
// 00795961  8bf1                 mov esi, ecx
// 00795963  e808fdffff           call 0x795670
// 00795968  8b4604               mov eax, dword ptr [esi + 4]
// 0079596b  50                   push eax
// 0079596c  e8e7460700           call 0x80a058
// 00795971  83c404               add esp, 4
// 00795974  c7460400000000       mov dword ptr [esi + 4], 0
// 0079597b  5e                   pop esi
// 0079597c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
