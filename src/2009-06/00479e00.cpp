// roc 2009-06 00479e00  unit: Ogre::VisualEngine  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00479e00
//
// 00479e00  56                   push esi
// 00479e01  8b742408             mov esi, dword ptr [esp + 8]
// 00479e05  85f6                 test esi, esi
// 00479e07  7410                 je 0x479e19
// 00479e09  8bce                 mov ecx, esi
// 00479e0b  e870fcffff           call 0x479a80
// 00479e10  56                   push esi
// 00479e11  e81cec2900           call 0x718a32
// 00479e16  83c404               add esp, 4
// 00479e19  5e                   pop esi
// 00479e1a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
