// roc 2009-12 0078be20  unit: RBX::Lua::VWeakThreadRef::?$sp_counted_impl_p  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078be20
//
// 0078be20  56                   push esi
// 0078be21  8b742408             mov esi, dword ptr [esp + 8]
// 0078be25  85f6                 test esi, esi
// 0078be27  7410                 je 0x78be39
// 0078be29  8bce                 mov ecx, esi
// 0078be2b  e830f1ffff           call 0x78af60
// 0078be30  56                   push esi
// 0078be31  e8247a0600           call 0x7f385a
// 0078be36  83c404               add esp, 4
// 0078be39  5e                   pop esi
// 0078be3a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
