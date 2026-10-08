// roc 2009-12 00550150  unit: RBX::Network::VClient::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00550150
//
// 00550150  56                   push esi
// 00550151  8b742408             mov esi, dword ptr [esp + 8]
// 00550155  85f6                 test esi, esi
// 00550157  7410                 je 0x550169
// 00550159  8bce                 mov ecx, esi
// 0055015b  e870f8fdff           call 0x52f9d0
// 00550160  56                   push esi
// 00550161  e8f4362a00           call 0x7f385a
// 00550166  83c404               add esp, 4
// 00550169  5e                   pop esi
// 0055016a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
