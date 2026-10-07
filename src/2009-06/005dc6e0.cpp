// roc 2009-06 005dc6e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005dc6e0
//
// 005dc6e0  53                   push ebx
// 005dc6e1  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005dc6e5  55                   push ebp
// 005dc6e6  56                   push esi
// 005dc6e7  8b742414             mov esi, dword ptr [esp + 0x14]
// 005dc6eb  57                   push edi
// 005dc6ec  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005dc6f0  8bc6                 mov eax, esi
// 005dc6f2  2bc7                 sub eax, edi
// 005dc6f4  c1f805               sar eax, 5
// 005dc6f7  c1e005               shl eax, 5
// 005dc6fa  8beb                 mov ebp, ebx
// 005dc6fc  2be8                 sub ebp, eax
// 005dc6fe  3bfe                 cmp edi, esi
// 005dc700  7412                 je 0x5dc714
// 005dc702  2bde                 sub ebx, esi
// 005dc704  83ee20               sub esi, 0x20
// 005dc707  56                   push esi
// 005dc708  8d0c33               lea ecx, [ebx + esi]
// 005dc70b  e8a0e5ffff           call 0x5dacb0
// 005dc710  3bf7                 cmp esi, edi
// 005dc712  75f0                 jne 0x5dc704
// 005dc714  5f                   pop edi
// 005dc715  5e                   pop esi
// 005dc716  8bc5                 mov eax, ebp
// 005dc718  5d                   pop ebp
// 005dc719  5b                   pop ebx
// 005dc71a  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Copy_backward_opt@PAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV12@@std@@YAPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
