// roc 2009-12 004778f0  unit: RBX::Reflection::VValue::V?$vector::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004778f0
//
// 004778f0  53                   push ebx
// 004778f1  56                   push esi
// 004778f2  8bf1                 mov esi, ecx
// 004778f4  57                   push edi
// 004778f5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004778f9  8d5e04               lea ebx, [esi + 4]
// 004778fc  57                   push edi
// 004778fd  8bcb                 mov ecx, ebx
// 004778ff  893e                 mov dword ptr [esi], edi
// 00477901  e83affffff           call 0x477840
// 00477906  57                   push edi
// 00477907  57                   push edi
// 00477908  53                   push ebx
// 00477909  e882d13d00           call 0x854a90
// 0047790e  83c40c               add esp, 0xc
// 00477911  5f                   pop edi
// 00477912  8bc6                 mov eax, esi
// 00477914  5e                   pop esi
// 00477915  5b                   pop ebx
// 00477916  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
