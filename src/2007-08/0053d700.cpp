// roc 2007-08 0053d700  unit: RBX::VLocalScript::?$FactoryProduct  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d700
//
// 0053d700  53                   push ebx
// 0053d701  56                   push esi
// 0053d702  8bf1                 mov esi, ecx
// 0053d704  57                   push edi
// 0053d705  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0053d709  8d5e04               lea ebx, [esi + 4]
// 0053d70c  57                   push edi
// 0053d70d  8bcb                 mov ecx, ebx
// 0053d70f  893e                 mov dword ptr [esi], edi
// 0053d711  e8cafbffff           call 0x53d2e0
// 0053d716  57                   push edi
// 0053d717  57                   push edi
// 0053d718  53                   push ebx
// 0053d719  e802f5ecff           call 0x40cc20
// 0053d71e  83c40c               add esp, 0xc
// 0053d721  5f                   pop edi
// 0053d722  8bc6                 mov eax, esi
// 0053d724  5e                   pop esi
// 0053d725  5b                   pop ebx
// 0053d726  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
