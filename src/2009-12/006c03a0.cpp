// roc 2009-12 006c03a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c03a0
//
// 006c03a0  55                   push ebp
// 006c03a1  8bec                 mov ebp, esp
// 006c03a3  6aff                 push -1
// 006c03a5  68b18e9400           push 0x948eb1
// 006c03aa  64a100000000         mov eax, dword ptr fs:[0]
// 006c03b0  50                   push eax
// 006c03b1  64892500000000       mov dword ptr fs:[0], esp
// 006c03b8  83ec10               sub esp, 0x10
// 006c03bb  53                   push ebx
// 006c03bc  56                   push esi
// 006c03bd  8b7508               mov esi, dword ptr [ebp + 8]
// 006c03c0  57                   push edi
// 006c03c1  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 006c03c4  33db                 xor ebx, ebx
// 006c03c6  8965f0               mov dword ptr [ebp - 0x10], esp
// 006c03c9  8975ec               mov dword ptr [ebp - 0x14], esi
// 006c03cc  895dfc               mov dword ptr [ebp - 4], ebx
// 006c03cf  90                   nop 
// 006c03d0  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 006c03d3  7663                 jbe 0x6c0438
// 006c03d5  8975e8               mov dword ptr [ebp - 0x18], esi
// 006c03d8  8975e4               mov dword ptr [ebp - 0x1c], esi
// 006c03db  c645fc01             mov byte ptr [ebp - 4], 1
// 006c03df  3bf3                 cmp esi, ebx
// 006c03e1  741c                 je 0x6c03ff
// 006c03e3  891e                 mov dword ptr [esi], ebx
// 006c03e5  8b07                 mov eax, dword ptr [edi]
// 006c03e7  3bc3                 cmp eax, ebx
// 006c03e9  7414                 je 0x6c03ff
// 006c03eb  8906                 mov dword ptr [esi], eax
// 006c03ed  8b07                 mov eax, dword ptr [edi]
// 006c03ef  8b00                 mov eax, dword ptr [eax]
// 006c03f1  53                   push ebx
// 006c03f2  8d4e08               lea ecx, [esi + 8]
// 006c03f5  51                   push ecx
// 006c03f6  8d5708               lea edx, [edi + 8]
// 006c03f9  52                   push edx
// 006c03fa  ffd0                 call eax
// 006c03fc  83c40c               add esp, 0xc
// 006c03ff  ff4d0c               dec dword ptr [ebp + 0xc]
// 006c0402  83c620               add esi, 0x20
// 006c0405  885dfc               mov byte ptr [ebp - 4], bl
// 006c0408  897508               mov dword ptr [ebp + 8], esi
// 006c040b  ebc3                 jmp 0x6c03d0
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Uninit_fill_n@PAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@IV12@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@YAXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@IABV12@AAV?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
