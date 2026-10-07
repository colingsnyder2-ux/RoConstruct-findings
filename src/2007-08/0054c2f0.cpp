// roc 2007-08 0054c2f0  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054c2f0
//
// 0054c2f0  56                   push esi
// 0054c2f1  8b742408             mov esi, dword ptr [esp + 8]
// 0054c2f5  85f6                 test esi, esi
// 0054c2f7  7410                 je 0x54c309
// 0054c2f9  8bce                 mov ecx, esi
// 0054c2fb  e8f0ebffff           call 0x54aef0
// 0054c300  56                   push esi
// 0054c301  e85c390e00           call 0x62fc62
// 0054c306  83c404               add esp, 4
// 0054c309  5e                   pop esi
// 0054c30a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
