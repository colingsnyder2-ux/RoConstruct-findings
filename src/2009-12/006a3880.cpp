// roc 2009-12 006a3880  unit: RBX::Lua::VLiveThreadRef::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a3880
//
// 006a3880  53                   push ebx
// 006a3881  56                   push esi
// 006a3882  8bf1                 mov esi, ecx
// 006a3884  57                   push edi
// 006a3885  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006a3889  8d5e04               lea ebx, [esi + 4]
// 006a388c  57                   push edi
// 006a388d  8bcb                 mov ecx, ebx
// 006a388f  893e                 mov dword ptr [esi], edi
// 006a3891  e85afaffff           call 0x6a32f0
// 006a3896  57                   push edi
// 006a3897  57                   push edi
// 006a3898  53                   push ebx
// 006a3899  e8f2111b00           call 0x854a90
// 006a389e  83c40c               add esp, 0xc
// 006a38a1  5f                   pop edi
// 006a38a2  8bc6                 mov eax, esi
// 006a38a4  5e                   pop esi
// 006a38a5  5b                   pop ebx
// 006a38a6  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
