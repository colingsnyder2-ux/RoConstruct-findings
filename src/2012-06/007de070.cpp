// from server: 100% by auto
// roc 2012-06 007de070  unit: RBX::VInstance::?$NonFactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007de070
//
// 007de070  56                   push esi
// 007de071  8bf1                 mov esi, ecx
// 007de073  e878fcffff           call 0x7ddcf0
// 007de078  8b4604               mov eax, dword ptr [esi + 4]
// 007de07b  50                   push eax
// 007de07c  e893401a00           call 0x982114
// 007de081  83c404               add esp, 4
// 007de084  c7460400000000       mov dword ptr [esi + 4], 0
// 007de08b  5e                   pop esi
// 007de08c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
