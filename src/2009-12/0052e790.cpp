// roc 2009-12 0052e790  unit: RBX::Network::VGuidRegistryService::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052e790
//
// 0052e790  56                   push esi
// 0052e791  8b742408             mov esi, dword ptr [esp + 8]
// 0052e795  85f6                 test esi, esi
// 0052e797  7410                 je 0x52e7a9
// 0052e799  8bce                 mov ecx, esi
// 0052e79b  e8c0feffff           call 0x52e660
// 0052e7a0  56                   push esi
// 0052e7a1  e8b4502c00           call 0x7f385a
// 0052e7a6  83c404               add esp, 4
// 0052e7a9  5e                   pop esi
// 0052e7aa  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
