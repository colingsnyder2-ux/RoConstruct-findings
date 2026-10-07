// roc 2010-06 006ba4f0  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ba4f0
//
// 006ba4f0  56                   push esi
// 006ba4f1  8b742408             mov esi, dword ptr [esp + 8]
// 006ba4f5  85f6                 test esi, esi
// 006ba4f7  7410                 je 0x6ba509
// 006ba4f9  8bce                 mov ecx, esi
// 006ba4fb  e850fdffff           call 0x6ba250
// 006ba500  56                   push esi
// 006ba501  e894d40e00           call 0x7a799a
// 006ba506  83c404               add esp, 4
// 006ba509  5e                   pop esi
// 006ba50a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
