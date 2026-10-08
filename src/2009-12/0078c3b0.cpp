// roc 2009-12 0078c3b0  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078c3b0
//
// 0078c3b0  53                   push ebx
// 0078c3b1  56                   push esi
// 0078c3b2  8bf1                 mov esi, ecx
// 0078c3b4  57                   push edi
// 0078c3b5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0078c3b9  8d5e04               lea ebx, [esi + 4]
// 0078c3bc  57                   push edi
// 0078c3bd  8bcb                 mov ecx, ebx
// 0078c3bf  893e                 mov dword ptr [esi], edi
// 0078c3c1  e86afbffff           call 0x78bf30
// 0078c3c6  57                   push edi
// 0078c3c7  57                   push edi
// 0078c3c8  53                   push ebx
// 0078c3c9  e8c2860c00           call 0x854a90
// 0078c3ce  83c40c               add esp, 0xc
// 0078c3d1  5f                   pop edi
// 0078c3d2  8bc6                 mov eax, esi
// 0078c3d4  5e                   pop esi
// 0078c3d5  5b                   pop ebx
// 0078c3d6  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
