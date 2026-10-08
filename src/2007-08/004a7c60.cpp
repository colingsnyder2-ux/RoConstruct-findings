// from server: 100% by auto
// roc 2007-08 004a7c60  unit: RBX::Network::Replicator::ChangePropertyItem  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a7c60
//
// 004a7c60  53                   push ebx
// 004a7c61  56                   push esi
// 004a7c62  8bf1                 mov esi, ecx
// 004a7c64  57                   push edi
// 004a7c65  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a7c69  8d5e04               lea ebx, [esi + 4]
// 004a7c6c  57                   push edi
// 004a7c6d  8bcb                 mov ecx, ebx
// 004a7c6f  893e                 mov dword ptr [esi], edi
// 004a7c71  e82af4ffff           call 0x4a70a0
// 004a7c76  57                   push edi
// 004a7c77  57                   push edi
// 004a7c78  53                   push ebx
// 004a7c79  e8a24ff6ff           call 0x40cc20
// 004a7c7e  83c40c               add esp, 0xc
// 004a7c81  5f                   pop edi
// 004a7c82  8bc6                 mov eax, esi
// 004a7c84  5e                   pop esi
// 004a7c85  5b                   pop ebx
// 004a7c86  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
