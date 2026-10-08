// from server: 100% by auto
// roc 2007-08 0042b380  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042b380
//
// 0042b380  56                   push esi
// 0042b381  8b742408             mov esi, dword ptr [esp + 8]
// 0042b385  85f6                 test esi, esi
// 0042b387  7410                 je 0x42b399
// 0042b389  8bce                 mov ecx, esi
// 0042b38b  e820f4ffff           call 0x42a7b0
// 0042b390  56                   push esi
// 0042b391  e8cc482000           call 0x62fc62
// 0042b396  83c404               add esp, 4
// 0042b399  5e                   pop esi
// 0042b39a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
