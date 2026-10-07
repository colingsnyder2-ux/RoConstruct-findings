// roc 2010-06 007243d0  unit: RBX::Lua::VWeakThreadRef::?$sp_counted_impl_p  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007243d0
//
// 007243d0  56                   push esi
// 007243d1  8b742408             mov esi, dword ptr [esp + 8]
// 007243d5  85f6                 test esi, esi
// 007243d7  7410                 je 0x7243e9
// 007243d9  8bce                 mov ecx, esi
// 007243db  e860f3ffff           call 0x723740
// 007243e0  56                   push esi
// 007243e1  e8b4350800           call 0x7a799a
// 007243e6  83c404               add esp, 4
// 007243e9  5e                   pop esi
// 007243ea  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
