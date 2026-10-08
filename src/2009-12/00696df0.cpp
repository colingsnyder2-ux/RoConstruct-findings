// roc 2009-12 00696df0  unit: RBX::P8Workspace::?$GetSetImpl  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00696df0
//
// 00696df0  56                   push esi
// 00696df1  8b742408             mov esi, dword ptr [esp + 8]
// 00696df5  85f6                 test esi, esi
// 00696df7  7410                 je 0x696e09
// 00696df9  8bce                 mov ecx, esi
// 00696dfb  e8f01b2800           call 0x9189f0
// 00696e00  56                   push esi
// 00696e01  e854ca1500           call 0x7f385a
// 00696e06  83c404               add esp, 4
// 00696e09  5e                   pop esi
// 00696e0a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
