// roc 2011-06 009a3fb0  unit: RBX::BrickBuilder  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009a3fb0
//
// 009a3fb0  56                   push esi
// 009a3fb1  8bf1                 mov esi, ecx
// 009a3fb3  e808ffffff           call 0x9a3ec0
// 009a3fb8  8b4604               mov eax, dword ptr [esi + 4]
// 009a3fbb  50                   push eax
// 009a3fbc  e89760e6ff           call 0x80a058
// 009a3fc1  83c404               add esp, 4
// 009a3fc4  c7460400000000       mov dword ptr [esi + 4], 0
// 009a3fcb  5e                   pop esi
// 009a3fcc  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
