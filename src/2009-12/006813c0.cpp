// roc 2009-12 006813c0  unit: RBX::VProtectedString::?$TypedPropertyDescriptor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006813c0
//
// 006813c0  53                   push ebx
// 006813c1  56                   push esi
// 006813c2  8bf1                 mov esi, ecx
// 006813c4  57                   push edi
// 006813c5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006813c9  8d5e04               lea ebx, [esi + 4]
// 006813cc  57                   push edi
// 006813cd  8bcb                 mov ecx, ebx
// 006813cf  893e                 mov dword ptr [esi], edi
// 006813d1  e83afeffff           call 0x681210
// 006813d6  57                   push edi
// 006813d7  57                   push edi
// 006813d8  53                   push ebx
// 006813d9  e8b2361d00           call 0x854a90
// 006813de  83c40c               add esp, 0xc
// 006813e1  5f                   pop edi
// 006813e2  8bc6                 mov eax, esi
// 006813e4  5e                   pop esi
// 006813e5  5b                   pop ebx
// 006813e6  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
