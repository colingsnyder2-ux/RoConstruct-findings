// roc 2011-06 00512af0  unit: RBX::VInstance::?$NonFactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00512af0
//
// 00512af0  56                   push esi
// 00512af1  8b742408             mov esi, dword ptr [esp + 8]
// 00512af5  85f6                 test esi, esi
// 00512af7  7410                 je 0x512b09
// 00512af9  8bce                 mov ecx, esi
// 00512afb  e8b0faffff           call 0x5125b0
// 00512b00  56                   push esi
// 00512b01  e852752f00           call 0x80a058
// 00512b06  83c404               add esp, 4
// 00512b09  5e                   pop esi
// 00512b0a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
