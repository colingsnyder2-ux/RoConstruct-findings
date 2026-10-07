// roc 2012-06 00749ac0  unit: boost::Vthread::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00749ac0
//
// 00749ac0  53                   push ebx
// 00749ac1  56                   push esi
// 00749ac2  8bf1                 mov esi, ecx
// 00749ac4  57                   push edi
// 00749ac5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00749ac9  8d5e04               lea ebx, [esi + 4]
// 00749acc  57                   push edi
// 00749acd  8bcb                 mov ecx, ebx
// 00749acf  893e                 mov dword ptr [esi], edi
// 00749ad1  e82afaffff           call 0x749500
// 00749ad6  57                   push edi
// 00749ad7  57                   push edi
// 00749ad8  53                   push ebx
// 00749ad9  e8b20ce5ff           call 0x59a790
// 00749ade  83c40c               add esp, 0xc
// 00749ae1  5f                   pop edi
// 00749ae2  8bc6                 mov eax, esi
// 00749ae4  5e                   pop esi
// 00749ae5  5b                   pop ebx
// 00749ae6  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
