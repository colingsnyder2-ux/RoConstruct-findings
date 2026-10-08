// from server: 100% by auto
// roc 2011-06 004ce620  unit: RBX::VInstance::?$NonFactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ce620
//
// 004ce620  56                   push esi
// 004ce621  8bf1                 mov esi, ecx
// 004ce623  e838e5ffff           call 0x4ccb60
// 004ce628  8b4604               mov eax, dword ptr [esi + 4]
// 004ce62b  50                   push eax
// 004ce62c  e827ba3300           call 0x80a058
// 004ce631  83c404               add esp, 4
// 004ce634  c7460400000000       mov dword ptr [esi + 4], 0
// 004ce63b  5e                   pop esi
// 004ce63c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
