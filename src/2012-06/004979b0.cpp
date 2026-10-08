// from server: 100% by auto
// roc 2012-06 004979b0  unit: RBX::Tasks::Sequence  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004979b0
//
// 004979b0  56                   push esi
// 004979b1  8b742408             mov esi, dword ptr [esp + 8]
// 004979b5  85f6                 test esi, esi
// 004979b7  7410                 je 0x4979c9
// 004979b9  8bce                 mov ecx, esi
// 004979bb  e880feffff           call 0x497840
// 004979c0  56                   push esi
// 004979c1  e84ea74e00           call 0x982114
// 004979c6  83c404               add esp, 4
// 004979c9  5e                   pop esi
// 004979ca  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
