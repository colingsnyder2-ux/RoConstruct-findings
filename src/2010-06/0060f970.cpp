// roc 2010-06 0060f970  unit: RBX::Lua::VLiveThreadRef::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060f970
//
// 0060f970  53                   push ebx
// 0060f971  56                   push esi
// 0060f972  8bf1                 mov esi, ecx
// 0060f974  57                   push edi
// 0060f975  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0060f979  8d5e04               lea ebx, [esi + 4]
// 0060f97c  57                   push edi
// 0060f97d  8bcb                 mov ecx, ebx
// 0060f97f  893e                 mov dword ptr [esi], edi
// 0060f981  e8eaf5ffff           call 0x60ef70
// 0060f986  57                   push edi
// 0060f987  57                   push edi
// 0060f988  53                   push ebx
// 0060f989  e8224ce4ff           call 0x4545b0
// 0060f98e  83c40c               add esp, 0xc
// 0060f991  5f                   pop edi
// 0060f992  8bc6                 mov eax, esi
// 0060f994  5e                   pop esi
// 0060f995  5b                   pop ebx
// 0060f996  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
