// from server: 100% by auto
// roc 2011-06 00766790  unit: VYieldFunctionStateObject::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00766790
//
// 00766790  53                   push ebx
// 00766791  56                   push esi
// 00766792  8bf1                 mov esi, ecx
// 00766794  57                   push edi
// 00766795  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00766799  8d5e04               lea ebx, [esi + 4]
// 0076679c  57                   push edi
// 0076679d  8bcb                 mov ecx, ebx
// 0076679f  893e                 mov dword ptr [esi], edi
// 007667a1  e8aafaffff           call 0x766250
// 007667a6  57                   push edi
// 007667a7  57                   push edi
// 007667a8  53                   push ebx
// 007667a9  e8924e1000           call 0x86b640
// 007667ae  83c40c               add esp, 0xc
// 007667b1  5f                   pop edi
// 007667b2  8bc6                 mov eax, esi
// 007667b4  5e                   pop esi
// 007667b5  5b                   pop ebx
// 007667b6  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
