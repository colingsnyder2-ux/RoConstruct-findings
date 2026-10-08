// from server: 100% by auto
// roc 2008-06 0055f5b0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055f5b0
//
// 0055f5b0  53                   push ebx
// 0055f5b1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0055f5b5  56                   push esi
// 0055f5b6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0055f5ba  3bf3                 cmp esi, ebx
// 0055f5bc  742a                 je 0x55f5e8
// 0055f5be  57                   push edi
// 0055f5bf  8d7e08               lea edi, [esi + 8]
// 0055f5c2  8b06                 mov eax, dword ptr [esi]
// 0055f5c4  85c0                 test eax, eax
// 0055f5c6  7415                 je 0x55f5dd
// 0055f5c8  8b00                 mov eax, dword ptr [eax]
// 0055f5ca  85c0                 test eax, eax
// 0055f5cc  7409                 je 0x55f5d7
// 0055f5ce  6a01                 push 1
// 0055f5d0  57                   push edi
// 0055f5d1  57                   push edi
// 0055f5d2  ffd0                 call eax
// 0055f5d4  83c40c               add esp, 0xc
// 0055f5d7  c70600000000         mov dword ptr [esi], 0
// 0055f5dd  83c620               add esi, 0x20
// 0055f5e0  83c720               add edi, 0x20
// 0055f5e3  3bf3                 cmp esi, ebx
// 0055f5e5  75db                 jne 0x55f5c2
// 0055f5e7  5f                   pop edi
// 0055f5e8  5e                   pop esi
// 0055f5e9  5b                   pop ebx
// 0055f5ea  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Destroy_range@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@YAXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@0AAV?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
