// roc 2012-06 005471e0  unit: rbx::signals::Z::$$A6AX_NH::?$signal::Vslot::?$callable  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005471e0
//
// 005471e0  56                   push esi
// 005471e1  8bf1                 mov esi, ecx
// 005471e3  e828efffff           call 0x546110
// 005471e8  8b4604               mov eax, dword ptr [esi + 4]
// 005471eb  50                   push eax
// 005471ec  e823af4300           call 0x982114
// 005471f1  83c404               add esp, 4
// 005471f4  c7460400000000       mov dword ptr [esi + 4], 0
// 005471fb  5e                   pop esi
// 005471fc  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
