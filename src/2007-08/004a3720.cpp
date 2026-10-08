// from server: 100% by auto
// roc 2007-08 004a3720  unit: RBX::VInstance::?$Association::Item  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a3720
//
// 004a3720  56                   push esi
// 004a3721  8b742408             mov esi, dword ptr [esp + 8]
// 004a3725  85f6                 test esi, esi
// 004a3727  7410                 je 0x4a3739
// 004a3729  8bce                 mov ecx, esi
// 004a372b  e8f01f2800           call 0x725720
// 004a3730  56                   push esi
// 004a3731  e82cc51800           call 0x62fc62
// 004a3736  83c404               add esp, 4
// 004a3739  5e                   pop esi
// 004a373a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
