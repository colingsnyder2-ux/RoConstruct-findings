// from server: 100% by auto
// roc 2011-06 00733d30  unit: RBX::TextureContentProvider::VCachedImg::?$sp_counted_impl_p  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00733d30
//
// 00733d30  53                   push ebx
// 00733d31  56                   push esi
// 00733d32  8bf1                 mov esi, ecx
// 00733d34  57                   push edi
// 00733d35  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00733d39  8d5e04               lea ebx, [esi + 4]
// 00733d3c  57                   push edi
// 00733d3d  8bcb                 mov ecx, ebx
// 00733d3f  893e                 mov dword ptr [esi], edi
// 00733d41  e8cafdffff           call 0x733b10
// 00733d46  57                   push edi
// 00733d47  57                   push edi
// 00733d48  53                   push ebx
// 00733d49  e8f2781300           call 0x86b640
// 00733d4e  83c40c               add esp, 0xc
// 00733d51  5f                   pop edi
// 00733d52  8bc6                 mov eax, esi
// 00733d54  5e                   pop esi
// 00733d55  5b                   pop ebx
// 00733d56  c20400               ret 4
// library boost-1.34.1/libs\date_time\src\gregorian\greg_month.cpp (function ??$?0V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@?$shared_ptr@V?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@boost@@QAE@PAV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@GU?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@std@@@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/date_time/src/gregorian/greg_month.cpp
