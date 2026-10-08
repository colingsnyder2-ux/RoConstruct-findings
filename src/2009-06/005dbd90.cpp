// from server: 100% by auto
// roc 2009-06 005dbd90  unit: RBX::VInstance::?$NonFactoryProduct  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005dbd90
//
// 005dbd90  55                   push ebp
// 005dbd91  8bec                 mov ebp, esp
// 005dbd93  6aff                 push -1
// 005dbd95  6851358600           push 0x863551
// 005dbd9a  64a100000000         mov eax, dword ptr fs:[0]
// 005dbda0  50                   push eax
// 005dbda1  64892500000000       mov dword ptr fs:[0], esp
// 005dbda8  83ec0c               sub esp, 0xc
// 005dbdab  53                   push ebx
// 005dbdac  56                   push esi
// 005dbdad  8b7510               mov esi, dword ptr [ebp + 0x10]
// 005dbdb0  57                   push edi
// 005dbdb1  8b7d08               mov edi, dword ptr [ebp + 8]
// 005dbdb4  33db                 xor ebx, ebx
// 005dbdb6  8965f0               mov dword ptr [ebp - 0x10], esp
// 005dbdb9  8975ec               mov dword ptr [ebp - 0x14], esi
// 005dbdbc  895dfc               mov dword ptr [ebp - 4], ebx
// 005dbdbf  90                   nop 
// 005dbdc0  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 005dbdc3  7463                 je 0x5dbe28
// 005dbdc5  897508               mov dword ptr [ebp + 8], esi
// 005dbdc8  8975e8               mov dword ptr [ebp - 0x18], esi
// 005dbdcb  c645fc01             mov byte ptr [ebp - 4], 1
// 005dbdcf  3bf3                 cmp esi, ebx
// 005dbdd1  741c                 je 0x5dbdef
// 005dbdd3  891e                 mov dword ptr [esi], ebx
// 005dbdd5  8b07                 mov eax, dword ptr [edi]
// 005dbdd7  3bc3                 cmp eax, ebx
// 005dbdd9  7414                 je 0x5dbdef
// 005dbddb  8906                 mov dword ptr [esi], eax
// 005dbddd  8b07                 mov eax, dword ptr [edi]
// 005dbddf  8b00                 mov eax, dword ptr [eax]
// 005dbde1  53                   push ebx
// 005dbde2  8d4e08               lea ecx, [esi + 8]
// 005dbde5  51                   push ecx
// 005dbde6  8d5708               lea edx, [edi + 8]
// 005dbde9  52                   push edx
// 005dbdea  ffd0                 call eax
// 005dbdec  83c40c               add esp, 0xc
// 005dbdef  83c620               add esi, 0x20
// 005dbdf2  885dfc               mov byte ptr [ebp - 4], bl
// 005dbdf5  897510               mov dword ptr [ebp + 0x10], esi
// 005dbdf8  83c720               add edi, 0x20
// 005dbdfb  ebc3                 jmp 0x5dbdc0
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Uninit_copy@PAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV12@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@YAPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV12@00AAV?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
