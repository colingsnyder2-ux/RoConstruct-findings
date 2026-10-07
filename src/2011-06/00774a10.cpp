// roc 2011-06 00774a10  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00774a10
//
// 00774a10  56                   push esi
// 00774a11  8b742408             mov esi, dword ptr [esp + 8]
// 00774a15  85f6                 test esi, esi
// 00774a17  7410                 je 0x774a29
// 00774a19  8bce                 mov ecx, esi
// 00774a1b  e8300effff           call 0x765850
// 00774a20  56                   push esi
// 00774a21  e832560900           call 0x80a058
// 00774a26  83c404               add esp, 4
// 00774a29  5e                   pop esi
// 00774a2a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
