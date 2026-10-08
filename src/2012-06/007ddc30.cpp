// from server: 100% by auto
// roc 2012-06 007ddc30  unit: RBX::VInstance::?$NonFactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007ddc30
//
// 007ddc30  56                   push esi
// 007ddc31  8bf1                 mov esi, ecx
// 007ddc33  e8b8fbffff           call 0x7dd7f0
// 007ddc38  8b4604               mov eax, dword ptr [esi + 4]
// 007ddc3b  50                   push eax
// 007ddc3c  e8d3441a00           call 0x982114
// 007ddc41  83c404               add esp, 4
// 007ddc44  c7460400000000       mov dword ptr [esi + 4], 0
// 007ddc4b  5e                   pop esi
// 007ddc4c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
