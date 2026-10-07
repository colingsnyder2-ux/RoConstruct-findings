// roc 2009-06 005e2170  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e2170
//
// 005e2170  56                   push esi
// 005e2171  8b742408             mov esi, dword ptr [esp + 8]
// 005e2175  85f6                 test esi, esi
// 005e2177  7410                 je 0x5e2189
// 005e2179  8bce                 mov ecx, esi
// 005e217b  e8207b1200           call 0x709ca0
// 005e2180  56                   push esi
// 005e2181  e8ac681300           call 0x718a32
// 005e2186  83c404               add esp, 4
// 005e2189  5e                   pop esi
// 005e218a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
