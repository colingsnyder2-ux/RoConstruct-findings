// roc 2009-12 006a3380  unit: RBX::Lua::VLiveThreadRef::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a3380
//
// 006a3380  56                   push esi
// 006a3381  8b710c               mov esi, dword ptr [ecx + 0xc]
// 006a3384  85f6                 test esi, esi
// 006a3386  7410                 je 0x6a3398
// 006a3388  8bce                 mov ecx, esi
// 006a338a  e841760900           call 0x73a9d0
// 006a338f  56                   push esi
// 006a3390  e8c5041500           call 0x7f385a
// 006a3395  83c404               add esp, 4
// 006a3398  5e                   pop esi
// 006a3399  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ?dispose@?$sp_counted_impl_p@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
