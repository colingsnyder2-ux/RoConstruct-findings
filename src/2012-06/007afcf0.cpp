// from server: 100% by auto
// roc 2012-06 007afcf0  unit: RBX::VInstance::?$NonFactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007afcf0
//
// 007afcf0  56                   push esi
// 007afcf1  8bf1                 mov esi, ecx
// 007afcf3  e898fcffff           call 0x7af990
// 007afcf8  8b4604               mov eax, dword ptr [esi + 4]
// 007afcfb  50                   push eax
// 007afcfc  e813241d00           call 0x982114
// 007afd01  83c404               add esp, 4
// 007afd04  c7460400000000       mov dword ptr [esi + 4], 0
// 007afd0b  5e                   pop esi
// 007afd0c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
