// roc 2007-08 004a7c30  unit: RBX::Network::Replicator::ChangePropertyItem  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a7c30
//
// 004a7c30  53                   push ebx
// 004a7c31  56                   push esi
// 004a7c32  8bf1                 mov esi, ecx
// 004a7c34  57                   push edi
// 004a7c35  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a7c39  8d5e04               lea ebx, [esi + 4]
// 004a7c3c  57                   push edi
// 004a7c3d  8bcb                 mov ecx, ebx
// 004a7c3f  893e                 mov dword ptr [esi], edi
// 004a7c41  e8caf3ffff           call 0x4a7010
// 004a7c46  57                   push edi
// 004a7c47  57                   push edi
// 004a7c48  53                   push ebx
// 004a7c49  e8d24ff6ff           call 0x40cc20
// 004a7c4e  83c40c               add esp, 0xc
// 004a7c51  5f                   pop edi
// 004a7c52  8bc6                 mov eax, esi
// 004a7c54  5e                   pop esi
// 004a7c55  5b                   pop ebx
// 004a7c56  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
