// roc 2008-06 0055f5f0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055f5f0
//
// 0055f5f0  55                   push ebp
// 0055f5f1  8bec                 mov ebp, esp
// 0055f5f3  6aff                 push -1
// 0055f5f5  68c1ea7c00           push 0x7ceac1
// 0055f5fa  64a100000000         mov eax, dword ptr fs:[0]
// 0055f600  50                   push eax
// 0055f601  64892500000000       mov dword ptr fs:[0], esp
// 0055f608  83ec10               sub esp, 0x10
// 0055f60b  53                   push ebx
// 0055f60c  56                   push esi
// 0055f60d  8b7508               mov esi, dword ptr [ebp + 8]
// 0055f610  57                   push edi
// 0055f611  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0055f614  33db                 xor ebx, ebx
// 0055f616  8965f0               mov dword ptr [ebp - 0x10], esp
// 0055f619  8975ec               mov dword ptr [ebp - 0x14], esi
// 0055f61c  895dfc               mov dword ptr [ebp - 4], ebx
// 0055f61f  90                   nop 
// 0055f620  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 0055f623  7663                 jbe 0x55f688
// 0055f625  8975e8               mov dword ptr [ebp - 0x18], esi
// 0055f628  8975e4               mov dword ptr [ebp - 0x1c], esi
// 0055f62b  c645fc01             mov byte ptr [ebp - 4], 1
// 0055f62f  3bf3                 cmp esi, ebx
// 0055f631  741c                 je 0x55f64f
// 0055f633  891e                 mov dword ptr [esi], ebx
// 0055f635  8b07                 mov eax, dword ptr [edi]
// 0055f637  3bc3                 cmp eax, ebx
// 0055f639  7414                 je 0x55f64f
// 0055f63b  8906                 mov dword ptr [esi], eax
// 0055f63d  8b07                 mov eax, dword ptr [edi]
// 0055f63f  8b00                 mov eax, dword ptr [eax]
// 0055f641  53                   push ebx
// 0055f642  8d4e08               lea ecx, [esi + 8]
// 0055f645  51                   push ecx
// 0055f646  8d5708               lea edx, [edi + 8]
// 0055f649  52                   push edx
// 0055f64a  ffd0                 call eax
// 0055f64c  83c40c               add esp, 0xc
// 0055f64f  ff4d0c               dec dword ptr [ebp + 0xc]
// 0055f652  83c620               add esi, 0x20
// 0055f655  885dfc               mov byte ptr [ebp - 4], bl
// 0055f658  897508               mov dword ptr [ebp + 8], esi
// 0055f65b  ebc3                 jmp 0x55f620
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Uninit_fill_n@PAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@IV12@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@YAXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@IABV12@AAV?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
