// from server: 100% by auto
// roc 2010-06 008efad0  unit: Ogre::RbxMeshPartAdapter  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008efad0
//
// 008efad0  53                   push ebx
// 008efad1  56                   push esi
// 008efad2  8bf1                 mov esi, ecx
// 008efad4  57                   push edi
// 008efad5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008efad9  8d5e04               lea ebx, [esi + 4]
// 008efadc  57                   push edi
// 008efadd  8bcb                 mov ecx, ebx
// 008efadf  893e                 mov dword ptr [esi], edi
// 008efae1  e80af4ffff           call 0x8eeef0
// 008efae6  57                   push edi
// 008efae7  57                   push edi
// 008efae8  53                   push ebx
// 008efae9  e8c24ab6ff           call 0x4545b0
// 008efaee  83c40c               add esp, 0xc
// 008efaf1  5f                   pop edi
// 008efaf2  8bc6                 mov eax, esi
// 008efaf4  5e                   pop esi
// 008efaf5  5b                   pop ebx
// 008efaf6  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
