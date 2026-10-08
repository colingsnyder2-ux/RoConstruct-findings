// from server: 100% by auto
// roc 2012-06 0073c5d0  unit: RBX::VInstance::?$NonFactoryProduct  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0073c5d0
//
// 0073c5d0  56                   push esi
// 0073c5d1  8bf1                 mov esi, ecx
// 0073c5d3  e818a11300           call 0x8766f0
// 0073c5d8  8b4604               mov eax, dword ptr [esi + 4]
// 0073c5db  50                   push eax
// 0073c5dc  e8335b2400           call 0x982114
// 0073c5e1  83c404               add esp, 4
// 0073c5e4  c7460400000000       mov dword ptr [esi + 4], 0
// 0073c5eb  5e                   pop esi
// 0073c5ec  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
