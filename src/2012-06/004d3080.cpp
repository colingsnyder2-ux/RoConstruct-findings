// from server: 100% by auto
// roc 2012-06 004d3080  unit: RBX::PART::VWedge::?$FactoryProduct::Creator  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004d3080
//
// 004d3080  56                   push esi
// 004d3081  8b742408             mov esi, dword ptr [esp + 8]
// 004d3085  85f6                 test esi, esi
// 004d3087  7410                 je 0x4d3099
// 004d3089  8bce                 mov ecx, esi
// 004d308b  e890edffff           call 0x4d1e20
// 004d3090  56                   push esi
// 004d3091  e87ef04a00           call 0x982114
// 004d3096  83c404               add esp, 4
// 004d3099  5e                   pop esi
// 004d309a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
