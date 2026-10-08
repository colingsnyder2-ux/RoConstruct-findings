// from server: 100% by auto
// roc 2011-06 006c2800  unit: RBX::VInstance::?$NonFactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006c2800
//
// 006c2800  56                   push esi
// 006c2801  8bf1                 mov esi, ecx
// 006c2803  e8b8fcffff           call 0x6c24c0
// 006c2808  8b4604               mov eax, dword ptr [esi + 4]
// 006c280b  50                   push eax
// 006c280c  e847781400           call 0x80a058
// 006c2811  83c404               add esp, 4
// 006c2814  c7460400000000       mov dword ptr [esi + 4], 0
// 006c281b  5e                   pop esi
// 006c281c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
