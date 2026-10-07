// roc 2011-06 006556f0  unit: std::D::DU?$char_traits::V?$basic_string::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006556f0
//
// 006556f0  53                   push ebx
// 006556f1  56                   push esi
// 006556f2  8bf1                 mov esi, ecx
// 006556f4  57                   push edi
// 006556f5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006556f9  8d5e04               lea ebx, [esi + 4]
// 006556fc  57                   push edi
// 006556fd  8bcb                 mov ecx, ebx
// 006556ff  893e                 mov dword ptr [esi], edi
// 00655701  e85afbffff           call 0x655260
// 00655706  57                   push edi
// 00655707  57                   push edi
// 00655708  53                   push ebx
// 00655709  e8325f2100           call 0x86b640
// 0065570e  83c40c               add esp, 0xc
// 00655711  5f                   pop edi
// 00655712  8bc6                 mov eax, esi
// 00655714  5e                   pop esi
// 00655715  5b                   pop ebx
// 00655716  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
