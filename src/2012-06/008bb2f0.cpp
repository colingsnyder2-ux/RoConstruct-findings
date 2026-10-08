// from server: 100% by auto
// roc 2012-06 008bb2f0  unit: RBX::HttpQueueStatsItem  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008bb2f0
//
// 008bb2f0  56                   push esi
// 008bb2f1  8bf1                 mov esi, ecx
// 008bb2f3  e878fbffff           call 0x8bae70
// 008bb2f8  8b4604               mov eax, dword ptr [esi + 4]
// 008bb2fb  50                   push eax
// 008bb2fc  e8136e0c00           call 0x982114
// 008bb301  83c404               add esp, 4
// 008bb304  c7460400000000       mov dword ptr [esi + 4], 0
// 008bb30b  5e                   pop esi
// 008bb30c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
