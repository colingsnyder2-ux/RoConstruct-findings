// from server: 100% by auto
// roc 2010-06 0047d8c0  unit: VCContent::?$CComObject  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047d8c0
//
// 0047d8c0  53                   push ebx
// 0047d8c1  56                   push esi
// 0047d8c2  8bf1                 mov esi, ecx
// 0047d8c4  57                   push edi
// 0047d8c5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0047d8c9  8d5e04               lea ebx, [esi + 4]
// 0047d8cc  57                   push edi
// 0047d8cd  8bcb                 mov ecx, ebx
// 0047d8cf  893e                 mov dword ptr [esi], edi
// 0047d8d1  e85affffff           call 0x47d830
// 0047d8d6  57                   push edi
// 0047d8d7  57                   push edi
// 0047d8d8  53                   push ebx
// 0047d8d9  e8d26cfdff           call 0x4545b0
// 0047d8de  83c40c               add esp, 0xc
// 0047d8e1  5f                   pop edi
// 0047d8e2  8bc6                 mov eax, esi
// 0047d8e4  5e                   pop esi
// 0047d8e5  5b                   pop ebx
// 0047d8e6  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
