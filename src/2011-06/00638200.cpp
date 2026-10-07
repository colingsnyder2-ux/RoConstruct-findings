// roc 2011-06 00638200  unit: FLog::VFastLogSettingsItem::?$FactoryProduct::Creator  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00638200
//
// 00638200  56                   push esi
// 00638201  8b742408             mov esi, dword ptr [esp + 8]
// 00638205  85f6                 test esi, esi
// 00638207  7410                 je 0x638219
// 00638209  8bce                 mov ecx, esi
// 0063820b  e830ec0800           call 0x6c6e40
// 00638210  56                   push esi
// 00638211  e8421e1d00           call 0x80a058
// 00638216  83c404               add esp, 4
// 00638219  5e                   pop esi
// 0063821a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
