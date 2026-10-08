// roc 2009-12 00513a80  unit: RBX::Network::Players::W4ChatOption::?$holder  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00513a80
//
// 00513a80  56                   push esi
// 00513a81  8b742408             mov esi, dword ptr [esp + 8]
// 00513a85  85f6                 test esi, esi
// 00513a87  7410                 je 0x513a99
// 00513a89  8bce                 mov ecx, esi
// 00513a8b  e890b00100           call 0x52eb20
// 00513a90  56                   push esi
// 00513a91  e8c4fd2d00           call 0x7f385a
// 00513a96  83c404               add esp, 4
// 00513a99  5e                   pop esi
// 00513a9a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
