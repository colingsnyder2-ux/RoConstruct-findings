// roc 2010-06 006a0d10  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a0d10
//
// 006a0d10  56                   push esi
// 006a0d11  8b742408             mov esi, dword ptr [esp + 8]
// 006a0d15  85f6                 test esi, esi
// 006a0d17  7410                 je 0x6a0d29
// 006a0d19  8bce                 mov ecx, esi
// 006a0d1b  e8a0f6ffff           call 0x6a03c0
// 006a0d20  56                   push esi
// 006a0d21  e8746c1000           call 0x7a799a
// 006a0d26  83c404               add esp, 4
// 006a0d29  5e                   pop esi
// 006a0d2a  c3                   ret 
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$checked_delete@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@YAXPAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
