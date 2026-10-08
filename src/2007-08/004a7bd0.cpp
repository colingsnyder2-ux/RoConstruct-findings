// from server: 100% by auto
// roc 2007-08 004a7bd0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a7bd0
//
// 004a7bd0  53                   push ebx
// 004a7bd1  56                   push esi
// 004a7bd2  8bf1                 mov esi, ecx
// 004a7bd4  57                   push edi
// 004a7bd5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a7bd9  8d5e04               lea ebx, [esi + 4]
// 004a7bdc  57                   push edi
// 004a7bdd  8bcb                 mov ecx, ebx
// 004a7bdf  893e                 mov dword ptr [esi], edi
// 004a7be1  e80af3ffff           call 0x4a6ef0
// 004a7be6  57                   push edi
// 004a7be7  57                   push edi
// 004a7be8  53                   push ebx
// 004a7be9  e83250f6ff           call 0x40cc20
// 004a7bee  83c40c               add esp, 0xc
// 004a7bf1  5f                   pop edi
// 004a7bf2  8bc6                 mov eax, esi
// 004a7bf4  5e                   pop esi
// 004a7bf5  5b                   pop ebx
// 004a7bf6  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
