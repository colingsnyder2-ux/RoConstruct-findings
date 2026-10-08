// from server: 100% by auto
// roc 2009-06 005dc760  unit: RBX::VInstance::?$NonFactoryProduct  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005dc760
//
// 005dc760  55                   push ebp
// 005dc761  8bec                 mov ebp, esp
// 005dc763  6aff                 push -1
// 005dc765  6801368600           push 0x863601
// 005dc76a  64a100000000         mov eax, dword ptr fs:[0]
// 005dc770  50                   push eax
// 005dc771  64892500000000       mov dword ptr fs:[0], esp
// 005dc778  83ec10               sub esp, 0x10
// 005dc77b  53                   push ebx
// 005dc77c  56                   push esi
// 005dc77d  8b7508               mov esi, dword ptr [ebp + 8]
// 005dc780  57                   push edi
// 005dc781  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 005dc784  33db                 xor ebx, ebx
// 005dc786  8965f0               mov dword ptr [ebp - 0x10], esp
// 005dc789  8975ec               mov dword ptr [ebp - 0x14], esi
// 005dc78c  895dfc               mov dword ptr [ebp - 4], ebx
// 005dc78f  90                   nop 
// 005dc790  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 005dc793  7663                 jbe 0x5dc7f8
// 005dc795  8975e8               mov dword ptr [ebp - 0x18], esi
// 005dc798  8975e4               mov dword ptr [ebp - 0x1c], esi
// 005dc79b  c645fc01             mov byte ptr [ebp - 4], 1
// 005dc79f  3bf3                 cmp esi, ebx
// 005dc7a1  741c                 je 0x5dc7bf
// 005dc7a3  891e                 mov dword ptr [esi], ebx
// 005dc7a5  8b07                 mov eax, dword ptr [edi]
// 005dc7a7  3bc3                 cmp eax, ebx
// 005dc7a9  7414                 je 0x5dc7bf
// 005dc7ab  8906                 mov dword ptr [esi], eax
// 005dc7ad  8b07                 mov eax, dword ptr [edi]
// 005dc7af  8b00                 mov eax, dword ptr [eax]
// 005dc7b1  53                   push ebx
// 005dc7b2  8d4e08               lea ecx, [esi + 8]
// 005dc7b5  51                   push ecx
// 005dc7b6  8d5708               lea edx, [edi + 8]
// 005dc7b9  52                   push edx
// 005dc7ba  ffd0                 call eax
// 005dc7bc  83c40c               add esp, 0xc
// 005dc7bf  ff4d0c               dec dword ptr [ebp + 0xc]
// 005dc7c2  83c620               add esi, 0x20
// 005dc7c5  885dfc               mov byte ptr [ebp - 4], bl
// 005dc7c8  897508               mov dword ptr [ebp + 8], esi
// 005dc7cb  ebc3                 jmp 0x5dc790
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Uninit_fill_n@PAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@IV12@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@YAXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@IABV12@AAV?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
