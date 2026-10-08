// from server: 100% by auto
// roc 2008-06 0056b2a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056b2a0
//
// 0056b2a0  56                   push esi
// 0056b2a1  8b742408             mov esi, dword ptr [esp + 8]
// 0056b2a5  85f6                 test esi, esi
// 0056b2a7  7410                 je 0x56b2b9
// 0056b2a9  8bce                 mov ecx, esi
// 0056b2ab  e820ffffff           call 0x56b1d0
// 0056b2b0  56                   push esi
// 0056b2b1  e8c4531300           call 0x6a067a
// 0056b2b6  83c404               add esp, 4
// 0056b2b9  5e                   pop esi
// 0056b2ba  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
