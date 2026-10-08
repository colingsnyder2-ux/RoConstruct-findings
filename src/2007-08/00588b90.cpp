// from server: 100% by auto
// roc 2007-08 00588b90  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588b90
//
// 00588b90  56                   push esi
// 00588b91  8b742408             mov esi, dword ptr [esp + 8]
// 00588b95  85f6                 test esi, esi
// 00588b97  7410                 je 0x588ba9
// 00588b99  8bce                 mov ecx, esi
// 00588b9b  e860f3ffff           call 0x587f00
// 00588ba0  56                   push esi
// 00588ba1  e8bc700a00           call 0x62fc62
// 00588ba6  83c404               add esp, 4
// 00588ba9  5e                   pop esi
// 00588baa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
