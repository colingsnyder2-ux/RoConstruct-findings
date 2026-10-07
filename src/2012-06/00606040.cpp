// roc 2012-06 00606040  unit: RBX::BrickBuilder  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00606040
//
// 00606040  56                   push esi
// 00606041  8bf1                 mov esi, ecx
// 00606043  e808ffffff           call 0x605f50
// 00606048  8b4604               mov eax, dword ptr [esi + 4]
// 0060604b  50                   push eax
// 0060604c  e8c3c03700           call 0x982114
// 00606051  83c404               add esp, 4
// 00606054  c7460400000000       mov dword ptr [esi + 4], 0
// 0060605b  5e                   pop esi
// 0060605c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
