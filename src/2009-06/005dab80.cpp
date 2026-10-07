// roc 2009-06 005dab80  unit: std::D::DU?$char_traits::V?$basic_string::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005dab80
//
// 005dab80  53                   push ebx
// 005dab81  56                   push esi
// 005dab82  8bf1                 mov esi, ecx
// 005dab84  57                   push edi
// 005dab85  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005dab89  8d5e04               lea ebx, [esi + 4]
// 005dab8c  57                   push edi
// 005dab8d  8bcb                 mov ecx, ebx
// 005dab8f  893e                 mov dword ptr [esi], edi
// 005dab91  e83afaffff           call 0x5da5d0
// 005dab96  57                   push edi
// 005dab97  57                   push edi
// 005dab98  53                   push ebx
// 005dab99  e8429e0900           call 0x6749e0
// 005dab9e  83c40c               add esp, 0xc
// 005daba1  5f                   pop edi
// 005daba2  8bc6                 mov eax, esi
// 005daba4  5e                   pop esi
// 005daba5  5b                   pop ebx
// 005daba6  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
