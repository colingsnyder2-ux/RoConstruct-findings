// from server: 100% by auto
// roc 2011-06 0072adb0  unit: RBX::MeshContentProvider::VCachedMesh::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0072adb0
//
// 0072adb0  53                   push ebx
// 0072adb1  56                   push esi
// 0072adb2  8bf1                 mov esi, ecx
// 0072adb4  57                   push edi
// 0072adb5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0072adb9  8d5e04               lea ebx, [esi + 4]
// 0072adbc  57                   push edi
// 0072adbd  8bcb                 mov ecx, ebx
// 0072adbf  893e                 mov dword ptr [esi], edi
// 0072adc1  e84afdffff           call 0x72ab10
// 0072adc6  57                   push edi
// 0072adc7  57                   push edi
// 0072adc8  53                   push ebx
// 0072adc9  e872081400           call 0x86b640
// 0072adce  83c40c               add esp, 0xc
// 0072add1  5f                   pop edi
// 0072add2  8bc6                 mov eax, esi
// 0072add4  5e                   pop esi
// 0072add5  5b                   pop ebx
// 0072add6  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
