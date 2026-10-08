// from server: 100% by auto
// roc 2010-06 0060d760  unit: RBX::VScriptContext::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060d760
//
// 0060d760  56                   push esi
// 0060d761  8b742408             mov esi, dword ptr [esp + 8]
// 0060d765  85f6                 test esi, esi
// 0060d767  7410                 je 0x60d779
// 0060d769  8bce                 mov ecx, esi
// 0060d76b  e820c90a00           call 0x6ba090
// 0060d770  56                   push esi
// 0060d771  e824a21900           call 0x7a799a
// 0060d776  83c404               add esp, 4
// 0060d779  5e                   pop esi
// 0060d77a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
