// from server: 100% by auto
// roc 2012-06 007f7930  unit: RBX::VInstance::?$NonFactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007f7930
//
// 007f7930  56                   push esi
// 007f7931  8bf1                 mov esi, ecx
// 007f7933  e828fdffff           call 0x7f7660
// 007f7938  8b4604               mov eax, dword ptr [esi + 4]
// 007f793b  50                   push eax
// 007f793c  e8d3a71800           call 0x982114
// 007f7941  83c404               add esp, 4
// 007f7944  c7460400000000       mov dword ptr [esi + 4], 0
// 007f794b  5e                   pop esi
// 007f794c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
