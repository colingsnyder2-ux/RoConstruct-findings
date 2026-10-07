// roc 2008-06 004acdf0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004acdf0
//
// 004acdf0  53                   push ebx
// 004acdf1  56                   push esi
// 004acdf2  8bf1                 mov esi, ecx
// 004acdf4  57                   push edi
// 004acdf5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004acdf9  8d5e04               lea ebx, [esi + 4]
// 004acdfc  57                   push edi
// 004acdfd  8bcb                 mov ecx, ebx
// 004acdff  893e                 mov dword ptr [esi], edi
// 004ace01  e85af3ffff           call 0x4ac160
// 004ace06  57                   push edi
// 004ace07  57                   push edi
// 004ace08  53                   push ebx
// 004ace09  e80206fdff           call 0x47d410
// 004ace0e  83c40c               add esp, 0xc
// 004ace11  5f                   pop edi
// 004ace12  8bc6                 mov eax, esi
// 004ace14  5e                   pop esi
// 004ace15  5b                   pop ebx
// 004ace16  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
