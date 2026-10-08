// from server: 100% by auto
// roc 2012-06 00472bf0  unit: CRobloxApp  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00472bf0
//
// 00472bf0  56                   push esi
// 00472bf1  8b742408             mov esi, dword ptr [esp + 8]
// 00472bf5  85f6                 test esi, esi
// 00472bf7  7410                 je 0x472c09
// 00472bf9  8bce                 mov ecx, esi
// 00472bfb  e820edffff           call 0x471920
// 00472c00  56                   push esi
// 00472c01  e80ef55000           call 0x982114
// 00472c06  83c404               add esp, 4
// 00472c09  5e                   pop esi
// 00472c0a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
