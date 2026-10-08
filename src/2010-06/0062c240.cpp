// from server: 100% by auto
// roc 2010-06 0062c240  unit: RBX::VProtectedString::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0062c240
//
// 0062c240  53                   push ebx
// 0062c241  56                   push esi
// 0062c242  8bf1                 mov esi, ecx
// 0062c244  57                   push edi
// 0062c245  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0062c249  8d5e04               lea ebx, [esi + 4]
// 0062c24c  57                   push edi
// 0062c24d  8bcb                 mov ecx, ebx
// 0062c24f  893e                 mov dword ptr [esi], edi
// 0062c251  e8dafdffff           call 0x62c030
// 0062c256  57                   push edi
// 0062c257  57                   push edi
// 0062c258  53                   push ebx
// 0062c259  e85283e2ff           call 0x4545b0
// 0062c25e  83c40c               add esp, 0xc
// 0062c261  5f                   pop edi
// 0062c262  8bc6                 mov eax, esi
// 0062c264  5e                   pop esi
// 0062c265  5b                   pop ebx
// 0062c266  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
