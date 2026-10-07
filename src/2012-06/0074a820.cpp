// roc 2012-06 0074a820  unit: boost::_bi::H::V?$value::ZV?$list2::XP6AX_KPA_N::V?$bind_t::?$thread_data  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0074a820
//
// 0074a820  56                   push esi
// 0074a821  8bf1                 mov esi, ecx
// 0074a823  e878fdffff           call 0x74a5a0
// 0074a828  8b4604               mov eax, dword ptr [esi + 4]
// 0074a82b  50                   push eax
// 0074a82c  e8e3782300           call 0x982114
// 0074a831  83c404               add esp, 4
// 0074a834  c7460400000000       mov dword ptr [esi + 4], 0
// 0074a83b  5e                   pop esi
// 0074a83c  c3                   ret 
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?_Tidy@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
