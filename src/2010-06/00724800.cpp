// from server: 100% by auto
// roc 2010-06 00724800  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00724800
//
// 00724800  53                   push ebx
// 00724801  56                   push esi
// 00724802  8bf1                 mov esi, ecx
// 00724804  57                   push edi
// 00724805  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00724809  8d5e04               lea ebx, [esi + 4]
// 0072480c  57                   push edi
// 0072480d  8bcb                 mov ecx, ebx
// 0072480f  893e                 mov dword ptr [esi], edi
// 00724811  e8bafcffff           call 0x7244d0
// 00724816  57                   push edi
// 00724817  57                   push edi
// 00724818  53                   push ebx
// 00724819  e892fdd2ff           call 0x4545b0
// 0072481e  83c40c               add esp, 0xc
// 00724821  5f                   pop edi
// 00724822  8bc6                 mov eax, esi
// 00724824  5e                   pop esi
// 00724825  5b                   pop ebx
// 00724826  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
