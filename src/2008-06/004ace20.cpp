// roc 2008-06 004ace20  unit: RBX::Network::Replicator::ChangePropertyItem  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ace20
//
// 004ace20  53                   push ebx
// 004ace21  56                   push esi
// 004ace22  8bf1                 mov esi, ecx
// 004ace24  57                   push edi
// 004ace25  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004ace29  8d5e04               lea ebx, [esi + 4]
// 004ace2c  57                   push edi
// 004ace2d  8bcb                 mov ecx, ebx
// 004ace2f  893e                 mov dword ptr [esi], edi
// 004ace31  e84af4ffff           call 0x4ac280
// 004ace36  57                   push edi
// 004ace37  57                   push edi
// 004ace38  53                   push ebx
// 004ace39  e8d205fdff           call 0x47d410
// 004ace3e  83c40c               add esp, 0xc
// 004ace41  5f                   pop edi
// 004ace42  8bc6                 mov eax, esi
// 004ace44  5e                   pop esi
// 004ace45  5b                   pop ebx
// 004ace46  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
