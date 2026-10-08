// from server: 100% by auto
// roc 2008-06 0055ed20  unit: RBX::MD5HasherImpl  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055ed20
//
// 0055ed20  55                   push ebp
// 0055ed21  8bec                 mov ebp, esp
// 0055ed23  6aff                 push -1
// 0055ed25  6811ea7c00           push 0x7cea11
// 0055ed2a  64a100000000         mov eax, dword ptr fs:[0]
// 0055ed30  50                   push eax
// 0055ed31  64892500000000       mov dword ptr fs:[0], esp
// 0055ed38  83ec0c               sub esp, 0xc
// 0055ed3b  53                   push ebx
// 0055ed3c  56                   push esi
// 0055ed3d  8b7510               mov esi, dword ptr [ebp + 0x10]
// 0055ed40  57                   push edi
// 0055ed41  8b7d08               mov edi, dword ptr [ebp + 8]
// 0055ed44  33db                 xor ebx, ebx
// 0055ed46  8965f0               mov dword ptr [ebp - 0x10], esp
// 0055ed49  8975ec               mov dword ptr [ebp - 0x14], esi
// 0055ed4c  895dfc               mov dword ptr [ebp - 4], ebx
// 0055ed4f  90                   nop 
// 0055ed50  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 0055ed53  7463                 je 0x55edb8
// 0055ed55  897508               mov dword ptr [ebp + 8], esi
// 0055ed58  8975e8               mov dword ptr [ebp - 0x18], esi
// 0055ed5b  c645fc01             mov byte ptr [ebp - 4], 1
// 0055ed5f  3bf3                 cmp esi, ebx
// 0055ed61  741c                 je 0x55ed7f
// 0055ed63  891e                 mov dword ptr [esi], ebx
// 0055ed65  8b07                 mov eax, dword ptr [edi]
// 0055ed67  3bc3                 cmp eax, ebx
// 0055ed69  7414                 je 0x55ed7f
// 0055ed6b  8906                 mov dword ptr [esi], eax
// 0055ed6d  8b07                 mov eax, dword ptr [edi]
// 0055ed6f  8b00                 mov eax, dword ptr [eax]
// 0055ed71  53                   push ebx
// 0055ed72  8d4e08               lea ecx, [esi + 8]
// 0055ed75  51                   push ecx
// 0055ed76  8d5708               lea edx, [edi + 8]
// 0055ed79  52                   push edx
// 0055ed7a  ffd0                 call eax
// 0055ed7c  83c40c               add esp, 0xc
// 0055ed7f  83c620               add esi, 0x20
// 0055ed82  885dfc               mov byte ptr [ebp - 4], bl
// 0055ed85  897510               mov dword ptr [ebp + 0x10], esi
// 0055ed88  83c720               add edi, 0x20
// 0055ed8b  ebc3                 jmp 0x55ed50
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Uninit_copy@PAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV12@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@YAPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV12@00AAV?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
