// from server: 100% by auto
// roc 2008-06 0055dab0  unit: std::D::DU?$char_traits::V?$basic_string::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055dab0
//
// 0055dab0  53                   push ebx
// 0055dab1  56                   push esi
// 0055dab2  8bf1                 mov esi, ecx
// 0055dab4  57                   push edi
// 0055dab5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0055dab9  8d5e04               lea ebx, [esi + 4]
// 0055dabc  57                   push edi
// 0055dabd  8bcb                 mov ecx, ebx
// 0055dabf  893e                 mov dword ptr [esi], edi
// 0055dac1  e81afbffff           call 0x55d5e0
// 0055dac6  57                   push edi
// 0055dac7  57                   push edi
// 0055dac8  53                   push ebx
// 0055dac9  e842f9f1ff           call 0x47d410
// 0055dace  83c40c               add esp, 0xc
// 0055dad1  5f                   pop edi
// 0055dad2  8bc6                 mov eax, esi
// 0055dad4  5e                   pop esi
// 0055dad5  5b                   pop ebx
// 0055dad6  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
