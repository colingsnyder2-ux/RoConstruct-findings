// from server: 100% by auto
// roc 2011-06 007980e0  unit: RBX::VHttp::?$sp_counted_impl_p  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007980e0
//
// 007980e0  56                   push esi
// 007980e1  8bf1                 mov esi, ecx
// 007980e3  e898fcffff           call 0x797d80
// 007980e8  8b4604               mov eax, dword ptr [esi + 4]
// 007980eb  50                   push eax
// 007980ec  e8671f0700           call 0x80a058
// 007980f1  83c404               add esp, 4
// 007980f4  c7460400000000       mov dword ptr [esi + 4], 0
// 007980fb  5e                   pop esi
// 007980fc  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
