// roc 2011-06 004cc970  unit: RBX::VInstance::?$NonFactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004cc970
//
// 004cc970  56                   push esi
// 004cc971  8bf1                 mov esi, ecx
// 004cc973  e808f0ffff           call 0x4cb980
// 004cc978  8b4604               mov eax, dword ptr [esi + 4]
// 004cc97b  50                   push eax
// 004cc97c  e8d7d63300           call 0x80a058
// 004cc981  83c404               add esp, 4
// 004cc984  c7460400000000       mov dword ptr [esi + 4], 0
// 004cc98b  5e                   pop esi
// 004cc98c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
