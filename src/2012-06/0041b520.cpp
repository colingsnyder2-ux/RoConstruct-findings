// from server: 100% by auto
// roc 2012-06 0041b520  unit: VCRbxObject::?$CComObjectNoLock  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041b520
//
// 0041b520  56                   push esi
// 0041b521  8b742408             mov esi, dword ptr [esp + 8]
// 0041b525  85f6                 test esi, esi
// 0041b527  7410                 je 0x41b539
// 0041b529  8bce                 mov ecx, esi
// 0041b52b  e860af0200           call 0x446490
// 0041b530  56                   push esi
// 0041b531  e8de6b5600           call 0x982114
// 0041b536  83c404               add esp, 4
// 0041b539  5e                   pop esi
// 0041b53a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
