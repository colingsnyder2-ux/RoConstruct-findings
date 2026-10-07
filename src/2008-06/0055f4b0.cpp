// roc 2008-06 0055f4b0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055f4b0
//
// 0055f4b0  53                   push ebx
// 0055f4b1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0055f4b5  55                   push ebp
// 0055f4b6  56                   push esi
// 0055f4b7  8b742414             mov esi, dword ptr [esp + 0x14]
// 0055f4bb  57                   push edi
// 0055f4bc  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0055f4c0  8bc6                 mov eax, esi
// 0055f4c2  2bc7                 sub eax, edi
// 0055f4c4  c1f805               sar eax, 5
// 0055f4c7  c1e005               shl eax, 5
// 0055f4ca  8beb                 mov ebp, ebx
// 0055f4cc  2be8                 sub ebp, eax
// 0055f4ce  3bfe                 cmp edi, esi
// 0055f4d0  7412                 je 0x55f4e4
// 0055f4d2  2bde                 sub ebx, esi
// 0055f4d4  83ee20               sub esi, 0x20
// 0055f4d7  56                   push esi
// 0055f4d8  8d0c33               lea ecx, [ebx + esi]
// 0055f4db  e8b05affff           call 0x554f90
// 0055f4e0  3bf7                 cmp esi, edi
// 0055f4e2  75f0                 jne 0x55f4d4
// 0055f4e4  5f                   pop edi
// 0055f4e5  5e                   pop esi
// 0055f4e6  8bc5                 mov eax, ebp
// 0055f4e8  5d                   pop ebp
// 0055f4e9  5b                   pop ebx
// 0055f4ea  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Copy_backward_opt@PAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV12@@std@@YAPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
