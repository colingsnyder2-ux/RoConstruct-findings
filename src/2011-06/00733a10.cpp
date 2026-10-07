// roc 2011-06 00733a10  unit: RBX::VInstance::?$NonFactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00733a10
//
// 00733a10  56                   push esi
// 00733a11  8b742408             mov esi, dword ptr [esp + 8]
// 00733a15  85f6                 test esi, esi
// 00733a17  7410                 je 0x733a29
// 00733a19  8bce                 mov ecx, esi
// 00733a1b  e8a0fcffff           call 0x7336c0
// 00733a20  56                   push esi
// 00733a21  e832660d00           call 0x80a058
// 00733a26  83c404               add esp, 4
// 00733a29  5e                   pop esi
// 00733a2a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
