// from server: 100% by auto
// roc 2012-06 00545f90  unit: rbx::signals::Z::$$A6AX_NH::?$signal::Vslot::?$callable  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00545f90
//
// 00545f90  56                   push esi
// 00545f91  8bf1                 mov esi, ecx
// 00545f93  e8c8eeffff           call 0x544e60
// 00545f98  8b4604               mov eax, dword ptr [esi + 4]
// 00545f9b  50                   push eax
// 00545f9c  e873c14300           call 0x982114
// 00545fa1  83c404               add esp, 4
// 00545fa4  c7460400000000       mov dword ptr [esi + 4], 0
// 00545fab  5e                   pop esi
// 00545fac  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
