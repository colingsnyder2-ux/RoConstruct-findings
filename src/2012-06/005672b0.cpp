// from server: 100% by auto
// roc 2012-06 005672b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005672b0
//
// 005672b0  56                   push esi
// 005672b1  8b742408             mov esi, dword ptr [esp + 8]
// 005672b5  85f6                 test esi, esi
// 005672b7  7410                 je 0x5672c9
// 005672b9  8bce                 mov ecx, esi
// 005672bb  e8a0feffff           call 0x567160
// 005672c0  56                   push esi
// 005672c1  e84eae4100           call 0x982114
// 005672c6  83c404               add esp, 4
// 005672c9  5e                   pop esi
// 005672ca  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
