// roc 2009-12 006ba870  unit: RBX::Soundscape::VSound::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ba870
//
// 006ba870  56                   push esi
// 006ba871  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006ba874  85f6                 test esi, esi
// 006ba876  7410                 je 0x6ba888
// 006ba878  8bce                 mov ecx, esi
// 006ba87a  e8c1f7ffff           call 0x6ba040
// 006ba87f  56                   push esi
// 006ba880  e8d58f1300           call 0x7f385a
// 006ba885  83c404               add esp, 4
// 006ba888  5e                   pop esi
// 006ba889  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
