// from server: 100% by auto
// roc 2010-06 005fe1c0  unit: RBX::VProtectedString::?$TypedPropertyDescriptor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005fe1c0
//
// 005fe1c0  53                   push ebx
// 005fe1c1  56                   push esi
// 005fe1c2  8bf1                 mov esi, ecx
// 005fe1c4  57                   push edi
// 005fe1c5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005fe1c9  8d5e04               lea ebx, [esi + 4]
// 005fe1cc  57                   push edi
// 005fe1cd  8bcb                 mov ecx, ebx
// 005fe1cf  893e                 mov dword ptr [esi], edi
// 005fe1d1  e88afcffff           call 0x5fde60
// 005fe1d6  57                   push edi
// 005fe1d7  57                   push edi
// 005fe1d8  53                   push ebx
// 005fe1d9  e8d263e5ff           call 0x4545b0
// 005fe1de  83c40c               add esp, 0xc
// 005fe1e1  5f                   pop edi
// 005fe1e2  8bc6                 mov eax, esi
// 005fe1e4  5e                   pop esi
// 005fe1e5  5b                   pop ebx
// 005fe1e6  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
