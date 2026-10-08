// roc 2009-12 006c0320  unit: RBX::VInstance::?$NonFactoryProduct  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c0320
//
// 006c0320  53                   push ebx
// 006c0321  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006c0325  55                   push ebp
// 006c0326  56                   push esi
// 006c0327  8b742414             mov esi, dword ptr [esp + 0x14]
// 006c032b  57                   push edi
// 006c032c  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006c0330  8bc6                 mov eax, esi
// 006c0332  2bc7                 sub eax, edi
// 006c0334  c1f805               sar eax, 5
// 006c0337  c1e005               shl eax, 5
// 006c033a  8beb                 mov ebp, ebx
// 006c033c  2be8                 sub ebp, eax
// 006c033e  3bfe                 cmp edi, esi
// 006c0340  7412                 je 0x6c0354
// 006c0342  2bde                 sub ebx, esi
// 006c0344  83ee20               sub esi, 0x20
// 006c0347  56                   push esi
// 006c0348  8d0c33               lea ecx, [ebx + esi]
// 006c034b  e8b0370400           call 0x703b00
// 006c0350  3bf7                 cmp esi, edi
// 006c0352  75f0                 jne 0x6c0344
// 006c0354  5f                   pop edi
// 006c0355  5e                   pop esi
// 006c0356  8bc5                 mov eax, ebp
// 006c0358  5d                   pop ebp
// 006c0359  5b                   pop ebx
// 006c035a  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Copy_backward_opt@PAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV12@@std@@YAPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
