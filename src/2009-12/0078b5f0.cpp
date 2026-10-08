// roc 2009-12 0078b5f0  unit: RBX::Lua::VWeakThreadRef::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078b5f0
//
// 0078b5f0  56                   push esi
// 0078b5f1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0078b5f4  85f6                 test esi, esi
// 0078b5f6  7410                 je 0x78b608
// 0078b5f8  8bce                 mov ecx, esi
// 0078b5fa  e881f6faff           call 0x73ac80
// 0078b5ff  56                   push esi
// 0078b600  e855820600           call 0x7f385a
// 0078b605  83c404               add esp, 4
// 0078b608  5e                   pop esi
// 0078b609  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
