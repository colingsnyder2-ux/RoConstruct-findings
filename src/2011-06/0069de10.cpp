// roc 2011-06 0069de10  unit: RBX::VInstance::?$NonFactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0069de10
//
// 0069de10  56                   push esi
// 0069de11  8bf1                 mov esi, ecx
// 0069de13  e8e8fcffff           call 0x69db00
// 0069de18  8b4604               mov eax, dword ptr [esi + 4]
// 0069de1b  50                   push eax
// 0069de1c  e837c21600           call 0x80a058
// 0069de21  83c404               add esp, 4
// 0069de24  c7460400000000       mov dword ptr [esi + 4], 0
// 0069de2b  5e                   pop esi
// 0069de2c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
