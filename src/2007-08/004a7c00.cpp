// roc 2007-08 004a7c00  unit: RBX::Network::Replicator::ChangePropertyItem  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a7c00
//
// 004a7c00  53                   push ebx
// 004a7c01  56                   push esi
// 004a7c02  8bf1                 mov esi, ecx
// 004a7c04  57                   push edi
// 004a7c05  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a7c09  8d5e04               lea ebx, [esi + 4]
// 004a7c0c  57                   push edi
// 004a7c0d  8bcb                 mov ecx, ebx
// 004a7c0f  893e                 mov dword ptr [esi], edi
// 004a7c11  e86af3ffff           call 0x4a6f80
// 004a7c16  57                   push edi
// 004a7c17  57                   push edi
// 004a7c18  53                   push ebx
// 004a7c19  e80250f6ff           call 0x40cc20
// 004a7c1e  83c40c               add esp, 0xc
// 004a7c21  5f                   pop edi
// 004a7c22  8bc6                 mov eax, esi
// 004a7c24  5e                   pop esi
// 004a7c25  5b                   pop ebx
// 004a7c26  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
