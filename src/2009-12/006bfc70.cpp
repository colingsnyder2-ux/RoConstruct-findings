// roc 2009-12 006bfc70  unit: RBX::VInstance::?$NonFactoryProduct  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006bfc70
//
// 006bfc70  55                   push ebp
// 006bfc71  8bec                 mov ebp, esp
// 006bfc73  6aff                 push -1
// 006bfc75  68418e9400           push 0x948e41
// 006bfc7a  64a100000000         mov eax, dword ptr fs:[0]
// 006bfc80  50                   push eax
// 006bfc81  64892500000000       mov dword ptr fs:[0], esp
// 006bfc88  83ec0c               sub esp, 0xc
// 006bfc8b  53                   push ebx
// 006bfc8c  56                   push esi
// 006bfc8d  8b7510               mov esi, dword ptr [ebp + 0x10]
// 006bfc90  57                   push edi
// 006bfc91  8b7d08               mov edi, dword ptr [ebp + 8]
// 006bfc94  33db                 xor ebx, ebx
// 006bfc96  8965f0               mov dword ptr [ebp - 0x10], esp
// 006bfc99  8975ec               mov dword ptr [ebp - 0x14], esi
// 006bfc9c  895dfc               mov dword ptr [ebp - 4], ebx
// 006bfc9f  90                   nop 
// 006bfca0  3b7d0c               cmp edi, dword ptr [ebp + 0xc]
// 006bfca3  7463                 je 0x6bfd08
// 006bfca5  897508               mov dword ptr [ebp + 8], esi
// 006bfca8  8975e8               mov dword ptr [ebp - 0x18], esi
// 006bfcab  c645fc01             mov byte ptr [ebp - 4], 1
// 006bfcaf  3bf3                 cmp esi, ebx
// 006bfcb1  741c                 je 0x6bfccf
// 006bfcb3  891e                 mov dword ptr [esi], ebx
// 006bfcb5  8b07                 mov eax, dword ptr [edi]
// 006bfcb7  3bc3                 cmp eax, ebx
// 006bfcb9  7414                 je 0x6bfccf
// 006bfcbb  8906                 mov dword ptr [esi], eax
// 006bfcbd  8b07                 mov eax, dword ptr [edi]
// 006bfcbf  8b00                 mov eax, dword ptr [eax]
// 006bfcc1  53                   push ebx
// 006bfcc2  8d4e08               lea ecx, [esi + 8]
// 006bfcc5  51                   push ecx
// 006bfcc6  8d5708               lea edx, [edi + 8]
// 006bfcc9  52                   push edx
// 006bfcca  ffd0                 call eax
// 006bfccc  83c40c               add esp, 0xc
// 006bfccf  83c620               add esi, 0x20
// 006bfcd2  885dfc               mov byte ptr [ebp - 4], bl
// 006bfcd5  897510               mov dword ptr [ebp + 0x10], esi
// 006bfcd8  83c720               add edi, 0x20
// 006bfcdb  ebc3                 jmp 0x6bfca0
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??$_Uninit_copy@PAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV12@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@YAPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@PAV12@00AAV?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
