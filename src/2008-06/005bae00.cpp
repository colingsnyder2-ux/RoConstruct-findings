// from server: 100% by auto
// roc 2008-06 005bae00  unit: RBX::Soundscape::SoundChannel  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bae00
//
// 005bae00  56                   push esi
// 005bae01  8b742408             mov esi, dword ptr [esp + 8]
// 005bae05  85f6                 test esi, esi
// 005bae07  7410                 je 0x5bae19
// 005bae09  8bce                 mov ecx, esi
// 005bae0b  e800f6ffff           call 0x5ba410
// 005bae10  56                   push esi
// 005bae11  e864580e00           call 0x6a067a
// 005bae16  83c404               add esp, 4
// 005bae19  5e                   pop esi
// 005bae1a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
