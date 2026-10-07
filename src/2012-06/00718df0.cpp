// roc 2012-06 00718df0  unit: FLog::VFastLogSettingsItem::?$FactoryProduct::Creator  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00718df0
//
// 00718df0  56                   push esi
// 00718df1  8b742408             mov esi, dword ptr [esp + 8]
// 00718df5  85f6                 test esi, esi
// 00718df7  7410                 je 0x718e09
// 00718df9  8bce                 mov ecx, esi
// 00718dfb  e890130f00           call 0x80a190
// 00718e00  56                   push esi
// 00718e01  e80e932600           call 0x982114
// 00718e06  83c404               add esp, 4
// 00718e09  5e                   pop esi
// 00718e0a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
