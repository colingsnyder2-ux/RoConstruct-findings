// roc 2011-06 004c8830  unit: RBX::Network::Players::W4PlayerChatType::?$holder  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004c8830
//
// 004c8830  56                   push esi
// 004c8831  8b742408             mov esi, dword ptr [esp + 8]
// 004c8835  85f6                 test esi, esi
// 004c8837  7410                 je 0x4c8849
// 004c8839  8bce                 mov ecx, esi
// 004c883b  e8d0400200           call 0x4ec910
// 004c8840  56                   push esi
// 004c8841  e812183400           call 0x80a058
// 004c8846  83c404               add esp, 4
// 004c8849  5e                   pop esi
// 004c884a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
