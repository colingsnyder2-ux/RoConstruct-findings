// from server: 100% by auto
// roc 2008-06 0042b0e0  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b0e0
//
// 0042b0e0  56                   push esi
// 0042b0e1  8b742408             mov esi, dword ptr [esp + 8]
// 0042b0e5  85f6                 test esi, esi
// 0042b0e7  7410                 je 0x42b0f9
// 0042b0e9  8bce                 mov ecx, esi
// 0042b0eb  e830f6ffff           call 0x42a720
// 0042b0f0  56                   push esi
// 0042b0f1  e884552700           call 0x6a067a
// 0042b0f6  83c404               add esp, 4
// 0042b0f9  5e                   pop esi
// 0042b0fa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
